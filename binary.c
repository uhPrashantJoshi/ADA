#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 10000

int arr[MAX];
int pos = -1;
int beg, end, mid;
beg = 0;
end = MAX;

int Bsearch(int key)
{
    delay();
    if(beg<=end)
    {
        mid = beg+(end-beg)/2;

        if(arr[mid]==key)
            {   return mid;

            }
        if(arr[mid]<key)
            {beg = mid + 1; return Bsearch(key);}
        else {end = mid-1; return Bsearch(key);}
        delay();

    }
    return -1;
}


delay()
{
    int c,d;
    for(c= 1;c<=10000000;c++)
        {for(d= 1;d<=10;d++){}
    }
}



int main()
{


    int i;
    for(i=0;i<MAX;i++)
        arr[i] = i;
    int n;
    printf("Enter the num : ");
    scanf("%d", &n);
    clock_t starting = clock();
    int pos = Bsearch(n);
    clock_t ending = clock();
    if(pos !=-1)
        {printf("%d is in the list at position : %d", n,pos);}
    else
        {printf("%d is not found", n);}

    printf("\n\nexecution time : %f s",((float)(ending-starting))/CLOCKS_PER_SEC);

}
