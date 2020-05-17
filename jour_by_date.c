#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int diff = 0, nb1 = 0, nb2 = 0, nb3 = 0, res = 0, monthInDay = 0, yearInDay = 0;
    _Bool isJulian;

    printf("Entrez une date jj/mm/aaaa : ");
    scanf("%d/%d/%d", &nb1, &nb2, &nb3);

    if (nb3<=1582)
    {
        isJulian = 1;
    }
    else
    {
        isJulian = 0;
    }
    
    switch (isJulian)
    {
    case 1:
        yearInDay = (nb3-1)*365;
        yearInDay += (nb3-1)/4;
        break;
    
    case 0:
        yearInDay = (nb3-1)*365;
        yearInDay += (nb3-1)/4;
        yearInDay -= (nb3-1)/100;
        yearInDay += (nb3-1)/400;
        yearInDay = yearInDay+2;
        break;
    }

    switch (nb2)
    {
    case 1:
        monthInDay = 0;
        break;

    case 2:
        monthInDay = 31;
        break;

    case 3:
        monthInDay = 59;
        break;

    case 4:
        monthInDay = 90;
        break;

    case 5:
        monthInDay = 120;
        break;

    case 6:
        monthInDay = 151;
        break;

    case 7:
        monthInDay = 181;
        break;

    case 8:
        monthInDay = 212;
        break;

    case 9:
        monthInDay = 243;
        break;

    case 10:
        monthInDay = 273;
        break;   

    case 11:
        monthInDay = 304;
        break;   

    case 12:
        monthInDay = 334;
        break;   
    }

    diff = yearInDay + monthInDay + nb1-1;
    res = diff % 7;

    switch (res)
    {
    case 0:
        printf("C'est un samedi\n");
        break;

    case 1:
        printf("C'est un dimanche\n");
        break;

    case 2:
        printf("C'est un lundi\n");
        break;

    case 3:
        printf("C'est un mardi\n");
        break;

    case 4:
        printf("C'est un mercredi\n");
        break;

    case 5:
        printf("C'est un jeudi\n");
        break;

    case 6:
        printf("C'est un vendredi\n");
        break;
    }
    return 0;
}