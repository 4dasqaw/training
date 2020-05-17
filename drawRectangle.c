#include <stdio.h>
#include <stdlib.h>

void rectangle(int,int);

int main(int argc, char *argv[])
{
    int longueur, largeur;

    printf("Donnez la longueur du rectangle : ");
    scanf("%d", &longueur);
    printf("Donnez la largeur du rectangle : ");
    scanf("%d", &largeur);

    rectangle(longueur, largeur);
}

void rectangle(int longueur, int largeur)
{
    for (int i = 0; i < longueur; i++)
    {
        for (int j = 0; j < largeur; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
}