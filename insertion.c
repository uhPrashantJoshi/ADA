

#include <stdio.h>
#include <time.h>

void delay(){
    double sum;
    for(int u = 0; u<1000; u++)
        sum = 33/333;
}

void printArray(int array[], int size) {

  for (int i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
}

void insertionSort(int array[], int size) {

  for (int step = 1; step < size; step++) {
    int key = array[step];
    int j = step - 1;

    while (key < array[j] && j >= 0) {
              delay();
      array[j + 1] = array[j];
      --j;
    }
    array[j + 1] = key;
  }
}


int main() {
    int i, n;
  printf("Enter the size of the array: ");
  scanf("%d",&n);
  int data[n];
  printf("\n");
  for(i=0;i<n;i++){
    data[i] = rand(0,10000);
  }

  int size = sizeof(data) / sizeof(data[0]);
  clock_t start = clock();
  insertionSort(data, size);
  clock_t end = clock();
  printf("Sorted array in ascending order:\n");
  printArray(data, size);
  printf("\n TIME TAKEN = %f", (double)(end-start)/CLOCKS_PER_SEC);
}
