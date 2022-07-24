#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void delay()
{
    int i,j,k;
    k=333;
    for(i=0;i<4000;i++)
    {
        for(j=0;j<100;j++)
        {

        }
        k=k/33;
    }
}

int linear(int arr[],int n,int key)
{
    int i;
    for(i=0;i<n;i++)
    {   delay();
        if(arr[i]==key)
            return i;
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
    int answer = linear(array,N,N-1);
    clock_t ending = clock();
    if(answer ==-1)
        printf("\n\nElement not found\n\n");
    else
        printf("\n\nPOS = %d",answer);
    printf("\n\n\n\n\tTHE TOTAL TIME = %f",(double)(ending-starting)/CLOCKS_PER_SEC);
}
