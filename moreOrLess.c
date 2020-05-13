#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
    const int MAX = 100, MIN = 1;
    int userNb = 101, ini = 0, wip = 0, hit = 0;
    srand(time(NULL));
    ini = 1;
    while (ini == 1)
    {
        int nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
        char buffer;
        printf("Quel est le nombre mystère ?\n");
        wip = 1;
        hit = 0;
        while (wip == 1)
        {
            scanf("%d", &userNb);
            if (userNb>nombreMystere)
            {
                printf("C'est moins !\n");
                hit++;
            }
            else if (userNb<nombreMystere)
            {
                printf("C'est plus !\n");
                hit++;
            } 
            else
            {
                hit++;
                printf("Bravo ! Vous avez gagner en %d coup(s)\n", hit);
                printf("Voulez vous rejouez ? Y/N\n");
                scanf(" %c", &buffer);
                if (buffer == 'Y')
                {
                    wip = 0;
                }
                else
                {
                    ini = 0;
                }
            }
        }     
    }
    //return 0;
}