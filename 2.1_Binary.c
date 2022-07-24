#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void delay()
{
    int i,j,k;
    k=333;
    for(i=0;i<400000;i++)
    {
        for(j=0;j<100;j++)
        {

        }
        k=k/33;
    }
}

int recursiveBinary(int arr[], int l, int r, int x)
{   delay();
    if(l<=r)
        {
    int mid = l+ (r-l)/2;

    if(arr[mid]==x){return mid;}
    if(arr[mid]>x){return recursiveBinary(arr,l,mid-1,x);}
    return recursiveBinary(arr,mid+1,r,x);
    }
        return -1;

}

int main()
{
    int N;
    printf("Enter the size of the array: ");
    scanf("%d",&N);
    int array[N], i;
    for(i=0;i<N;i++)
    {
        array[i] = i;
    }


    clock_t starting = clock();
    int answer = recursiveBinary(array,0,N-1,N);
    clock_t ending = clock();
    if(answer ==-1)
        printf("\n\nElement not found\n\n");
    else
        printf("\n\nPOS = %d",answer);
    printf("\n\n\n\n\tTHE TOTAL TIME = %f",(double)(ending-starting)/CLOCKS_PER_SEC);
}
