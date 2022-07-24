#include <stdio.h>
#include <stdlib.h>

void towerofhanoi(int n, char start, char dest, char aux)
{
    if(n==1)
    {
        printf("\nMove DISK 1 from %c to %c", start,dest);
        return;
    }
    else
    {
        towerofhanoi(n-1,start,aux,dest);
        printf("\nMove DISH %d from %c to %c", n , start, dest);
        towerofhanoi(n-1,aux,dest,start);
    }
}

int main()
{
    towerofhanoi(3,'A','B','C');
    return 0;
}
