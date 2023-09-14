// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>

int main() {
    
    printf("heeeey !! \n");
    int cmath,cpc,car,cspor,cang;
    float nmath,npc,nar,nspor,nang,moy;
    printf("entrez la note du math \n");
    scanf("%f",&nmath);
    printf("entrez la note du PC \n");
    scanf("%f",&npc);
    printf("entrez la note du ar \n");
    scanf("%f",&nar);
    printf("entrez la note du spor \n");
    scanf("%f",&nspor);
    printf("entrez la note du anglais \n");
    scanf("%f",&nang);
    
    printf("------------Bravoooo !!---------------\n");
    
    printf("entrez le coif du math \n");
    scanf("%d",&cmath);
    printf("entrez le coif du PC \n");
    scanf("%d",&cpc);
    printf("entrez le coif du ar \n");
    scanf("%d",&car);
    printf("entrez le coif du spor \n");
    scanf("%d",&cspor);
    printf("entrez le coif du anglais \n");
    scanf("%d",&cang);
    
    float nfc = (nmath*cmath) + (npc*cpc) + (nar*car) + (nspor*cspor) + (nang*cang) ;
    int sc = cmath + car + cpc + cspor + cang;
    moy = nfc/sc;
    printf("-------la moyenne generale est : %.2f",moy);
    
    if ( moy >= 10 && moy < 12)
    {
        printf("\n passable");
    }
    if ( moy >= 12 && moy < 14)
    {
        printf("\n assez bien");
    }
    if ( moy >= 14 && moy < 16)
    {
        printf("\n  bien");
    }
    if (moy >= 16)
    {
        printf("\n  Tbien");
    }
    
    else{
        printf("\n  9999999999991");
    }
    
    

}