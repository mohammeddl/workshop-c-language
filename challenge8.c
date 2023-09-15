#include <stdio.h>

int main()
{
    int moy;
    printf("type your note ");
    scanf("%d", &moy);

    if (moy <= 10)
    {
        printf("recalé");
    }
    if (moy >= 10 && moy < 12)
    {
        printf(" la mention passable");
    }
    if (moy >= 12 && moy < 14)
    {
        printf(" la mention assez bien");
    }
    if (moy >= 14 && moy < 16)
    {
        printf(" la mention bien");
    }
    if (moy >= 16)
    {
        printf("la mention très bien");
    }
}