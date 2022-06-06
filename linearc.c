#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int i=0;
int pos = -1;
#define MAX 10000
int arr[MAX];
int Lsearch(int key)
{   delay();
    if(arr[i]==key)
       {pos  = i;
       return 1;}
    else if(arr[i]!=key && i==MAX-1)
    { return 0;
    }
    else if(arr[i]!=key && i!=MAX-1)
    {
        i++;
        Lsearch(key);

    }
}
delay()
{
    int c;
    for(c= 1;c<=800000;c++)
        {}
}



int main()
{


    int i=0;
    for(i=0;i<MAX;i++)
        arr[i] = rand()%MAX + 1;
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    clock_t starting = clock();
    int isPresent = Lsearch(n);
    if(isPresent == 1)
        printf("%d is in the list at position : %d", n,pos);
    else
        printf("%d is not found", n);
    clock_t ending = clock();
    printf("\n\nexecution time : %f s",((float)(ending-starting))/CLOCKS_PER_SEC);
}
