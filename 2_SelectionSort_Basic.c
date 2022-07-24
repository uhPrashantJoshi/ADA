#include <stdio.h>
#include <stdlib.h>

void selectonSort(int array[], int sizeOfArray)
{   int i,j,swap,posOfMin;
    for(i =0;i<sizeOfArray;i++)
    {
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
    int array[] ={ 34,12,90,0,45, 24, 56,78,11,2};
    selectonSort(array, 10);
}
