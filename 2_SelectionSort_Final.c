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
void selectonSort(int array[], int sizeOfArray)
{   int i,j,swap,posOfMin;
    for(i =0;i<sizeOfArray;i++)
    {   delay();
        posOfMin = i;
        for( j = i + 1;j<sizeOfArray;j++)
        {
            if(array[j]<array[posOfMin])
            {
                posOfMin=j;
            }
        }
        if(posOfMin!=i)
        {
            swap = array[i];
            array[i] = array[posOfMin];
            array[posOfMin] = swap;

        }
    }
    printf("\n\n");

    for( i = 0;i<sizeOfArray;i++)
    {
        printf("\t%d",array[i]);
    }
}

int main()
{
    int N;
    printf("Enter the size of the array: ");
    scanf("%d",&N);
    int array[N], i;
    for(i=0;i<N;i++)
    {
        array[i] = rand();
    }


    clock_t starting = clock();
    selectonSort(array, N);
    clock_t ending = clock();
    printf("\n\n\n\n\tTHE TOTAL TIME = %f",(double)(ending-starting)/CLOCKS_PER_SEC);
}
