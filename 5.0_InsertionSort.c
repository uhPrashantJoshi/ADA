#include <math.h>
#include <stdio.h>
#include <time.h>
/*delay function*/
void delay()
{
    int i,j,k;
    for(i=0;i<4000;i++)
    {
        for(j=0;j<10000;j++)
            k=33/333;
    }
}
/* Function to sort an array using insertion sort*/
void insertionSort(int arr[], int n)
{
    int i, temp, j;
    for (i = 1; i < n; i++) {
        temp = arr[i];
        j = i - 1;
        
        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j = j - 1;
            delay();
        }
        arr[j + 1] = temp;
    }


    printf("\nSorted array: \n");
    for(j=0;j<n;j++)
    {
        printf("  %d  ",arr[j]);
    }
}

int main()
{
    int n;
    printf("Enter the size of the array");
    scanf("%d",&n);
    int arr[n];
    int i;
    for(i=0;i<n;i++)
    {
        arr[i] = rand();
    }
    clock_t start = clock();
    insertionSort(arr, n);
    clock_t end = clock();

    printf("\n\n\n\nTHE TOTAL TIME TAKEN = %.3f",(double)(end-start)/CLOCKS_PER_SEC);
    return 0;
}
