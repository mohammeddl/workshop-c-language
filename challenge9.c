#include <stdio.h>

int main()
{
    char c;
    int ac;
    printf("entrer le caractere \n");
    scanf("%c", &c);
    ac = (int)c;
    if (ac >= 65 && ac <= 90)
    {
        printf("c 'est un alphabet \n");
        printf("MAJ");
    }
    if (ac >= 97 && ac <= 122)
    {
        printf("c 'est un alphabet \n");
        printf("min");
    }
}
