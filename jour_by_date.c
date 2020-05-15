#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int diff = 0, nb1 = 0, res = 0;
    
    printf("Entrez un jour : ");
    scanf("%d", &nb1);

    diff = nb1-1;
    res = diff % 7;

    printf("%d\n", res);

    //return 0;
}