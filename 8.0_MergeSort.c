#include<stdio.h>
#include<time.h>


void mergesort(int a[],int l,int r)
{
    int mid;
    if(l<r)
    {
        mid=(l+r)/2;
        mergesort(a,l,mid);
        mergesort(a,mid+1,r);
        merge(a,l,mid,mid+1,r);
    }
}
void merge(int a[],int s,int mid,int midp1,int end)
{
    int temp[10000];
    int i,j,k;
    i=s;
    j=midp1;
    k=0;
    while(i<=mid && j<=end)
    {   delay();
        if(a[i]<a[j])
            temp[k++]=a[i++];
        else
            temp[k++]=a[j++];
    }
    while(i<=mid)
        temp[k++]=a[i++];
    while(j<=end)
        temp[k++]=a[j++];

    for(i=s,j=0;i<=end;i++,j++)
        a[i]=temp[j];
}

void delay()
{
    int  i, k;
    for(i=0;i<40000;i++)
        k= 33/333;
}
int main()
{
    int n,i;
    printf("Enter no of elements:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        a[i] = rand(1,10000);
    clock_t start = clock();
    mergesort(a,0,n-1);
    clock_t end = clock();
    printf("\nSorted array is :");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n\n\n\nThe total time taken is : %f",(double)(end-start)/CLOCKS_PER_SEC);
    return 0;
}


