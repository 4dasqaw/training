#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int res = 0, nb1 = 0, nb2 = 0;
    
    printf("Entrez la premiere variable\n");
    scanf("%d", &nb1);
    printf("Entrez la seconde variable\n");
    scanf("%d", &nb2);

    res = nb1 + nb2;

    printf("%d + %d = %d\n", nb1, nb2, res);

    //return 0;
}