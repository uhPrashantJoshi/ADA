#include <stdio.h>
#include <stdlib.h>


double GCD(int m, int n)
{
    if(n==0)
        return m;
    else
        return GCD(n,m%n);
}

int main()
{
    int n1, n2;
    printf("\nEnter the first number:");
    scanf("%d",&n1);
    printf("\nEnter the second number:");
    scanf("%d",&n2);
    
    double answer = GCD(n1,n2);
    printf("\n\nTHE ANSWER IS %.3f",answer);
    return 0;
}
