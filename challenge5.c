#include <stdio.h>

int main()
{
    int x, ch, y, z;
    printf("bonjour tappez l'annee \n");
    scanf("%d", &x);
    printf("1 - Mois \n 2 - Jours \n 3 - heurs \n 4 - Minutes \n 5 - secondes");
    scanf("%d", &ch);
    y = 2023 - x;
    switch (ch)
    {
    case 1
        z = 12 * y;
        printf("%d", z);
        break;
    case 2:
        z = y * 365;
        printf("%d", z);
        break;
    case 3:
        z = y * 8760;
        printf("%d", z);
        break;
    case 4:
        z = y * 525600;
        printf("%d", z);
        break;
    case 5:
        z = y * 31536000;
        printf("%d", z);
        break;

    default:
        printf("mal saisie");
        break;
    }
}