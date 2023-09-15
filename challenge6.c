#include <stdio.h>

int main()
{
    int x, ch, y, z;
    char a;
    printf("bonjour tappez le caractere\n");
    scanf("%c", &a);
    int ca = (int)a;

    int f = 0;

    for (int i = 65; i <= 90; i++)
    {
        if (ca == i)
        {
            printf("char es maj");
            f = 1;
        }
    }
    if (f == 0)
    {
        printf("char es min");
    }
}