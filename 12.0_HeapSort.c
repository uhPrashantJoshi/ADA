#include <stdio.h>
#include <time.h>
void delay()
{   int i,j,k;
    for(i= 0;i<50;i++)
    {
        for(j= 0;j<100;j++)
            k=333/33;
    }
}

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void heapify(int arr[], int n, int i) {
  int largest = i;
  int left = 2 * i + 1;
  int right = 2 * i + 2;
     delay();
  if (left < n && arr[left] > arr[largest])
    largest = left;

  if (right < n && arr[right] > arr[largest])
    largest = right;

  if (largest != i) {
    swap(&arr[i], &arr[largest]);
    heapify(arr, n, largest);
  }

}


void heapSort(int arr[], int n) {


  for (int i = n / 2 - 1; i >= 0; i--)

    heapify(arr, n, i);


  for (int i = n - 1; i >= 0; i--) {

    swap(&arr[0], &arr[i]);

    heapify(arr, i, 0);

  }
}
void printArray(int arr[], int n)
{
  for (int i = 0; i < n; i++)
    printf("%d ", arr[i]);
  printf("\n");

}

int main()
{
    printf("Enter the number of elements : ");
    int n;
    scanf("%d",&n);

    int arr[n];


    int i;
    for(i=0;i<n;i++)
    {
        arr[i] = rand(10000);
    }

 clock_t start = clock();

  heapSort(arr, n);
 clock_t end = clock();
  printf("Sorted array is given in the following way \n");
  printArray(arr, n);
   printf("\n\nTHE TOTAL TIME TAKEN BY THE BELOVED PROGrAM IS : %f\n\n",(double)(end-start)/CLOCKS_PER_SEC);
}

