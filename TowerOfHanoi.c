#include <stdio.h>
#include <stdlib.h>

void TowerOfHanoi(int n, char start, char dest, char aux)
{
    if(n==1)
    {
        printf("\n\tMove disk 1 from %c to %c", start, dest);
        return;

    }
    else{
        TowerOfHanoi(n-1,start,aux,dest);
        printf("\n\tMove disk %d from %c to %c",n,start,dest);
        TowerOfHanoi(n-1,aux,dest,start);
    }
}

int main()
{
    TowerOfHanoi(3,'A','C','B');
    return 0;
}
