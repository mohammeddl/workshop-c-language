int main()
{
    int nombre;

    printf("Entrez un nombre : ");
    scanf("%d", &nombre);

    if (nombre > 0)
    {
        printf("Le nombre est positif.\n");
    }
    else if (nombre < 0)
    {
        printf("Le nombre est négatif.\n");
    }
    else
    {
        printf("Le nombre est nul.\n");
    }

    return 0;
}