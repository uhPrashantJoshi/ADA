#include<stdio.h>
#include<time.h>
void delay()
{
    int i=0;
    int k;
    for(i=0;i<450000;i++)
    {
        k = 33/333;
    }
}


void quicksort(int number[10000],int first,int last){
   int i, j, pivot, temp;
   if(first<last){
      pivot=first;
      i=first;
      j=last;
      while(i<j){
         while(number[i]<=number[pivot]&&i<last)
         i++;
         while(number[j]>number[pivot])
         j--;
         if(i<j){
                delay();
            temp=number[i];
            number[i]=number[j];
            number[j]=temp;
         }
      }
      temp=number[pivot];
      number[pivot]=number[j];
      number[j]=temp;
      quicksort(number,first,j-1);
      quicksort(number,j+1,last);
   }
}
int main(){
   int i, count;
   printf("No. of elements: ");
   scanf("%d",&count);
    int number[count];
   for(i=0;i<count;i++)
    number[i] = rand(0,10000);
   clock_t start = clock();
   quicksort(number,0,count-1);
   clock_t end = clock();
   printf("Order of Sorted elements: ");
   for(i=0;i<count;i++)
   printf(" %d",number[i]);
   printf("\n\nTOTAL TIME : %f",(double)(end-start)/CLOCKS_PER_SEC);
   return 0;
}
