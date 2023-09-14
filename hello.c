#include <stdio.h>

// int main()
// {
//     // // les variable
//     // char x[10];
//     // float y;

//     // // input output
//     // printf("hi dear type your name\n");
//     // scanf("%d", x);
//     // printf("type you score \n");
//     // scanf("%f" ,y);
//     // printf("your name is: %d, your score is: %f", x, y);

// }

// int main()
// {
//     char nom[10];
//     char prenom[10];
//     int age;
//     char sexe;
//     int numero;

//     printf("type your name");
//     scanf("%s",&nom);
//     printf("type your last name");
//     scanf("%s",prenom);
//     printf("type your age");
//     scanf("%d",&age);
//     printf("type your sex");
//     scanf("%c",&sexe);
//     printf("your name is %s, your last name is %s, your age is %d, your sex is %C",nom, prenom, age, sexe);

//     return 0;

// }



int main() {
    float C, F;
    char sensation[20]; 

    printf("Entrez la température\n");

    scanf("%f", &F);

    C = (F - 32) / 1.8;

    if (C < -1) {
        strcpy(sensation, "\ntrès froid");
    }
    if (C < 10) {
        strcpy(sensation, "\nfroid");
    }
    if (C < 20) {
        strcpy(sensation, "chaud");
    }
    printf("La température en Celsius est : %.2f°C\n", C);
    printf("Sensation ressentie : %s\n", sensation); 
    
    return 0;
}


// int main() {
//     float number1, number2, triple;
    
//     printf("type number1\n");
//     scanf("%f",&number1);
//     printf("type number2\n");
//     scanf("%f",&number2);

//     triple = (number1*number2)*3;
    
//     printf("your total number is: %.2f",triple);

// }

#include <stdio.h>

int main() {
    int nombre;
    
    
    printf("Entrez un nombre : ");
    scanf("%d", &nombre);
    
    if (nombre > 0) {
        printf("Le nombre est positif.\n");
    } else if (nombre < 0) {
        printf("Le nombre est négatif.\n");
    } else {
        printf("Le nombre est nul.\n");
    }
    
    return 0;
}


