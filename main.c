#include <stdio.h>
#include <stdlib.h>

int verification_0(int tab[], int nbVal, int X){

    int cpt;
    for(cpt=0;cpt<nbVal;cpt++){

        if(tab[cpt] == X){
            return 1;
        }

        else{
            return 0;
        }
    }
}

int verification_1(int tab[], int nbVal, int X){

    int cpt;
    int trouve;
    for(cpt=0;cpt<nbVal;cpt++){

        if(tab[cpt] == X){
            trouve = 1;
        }
    }
    return trouve;
}

int verification_2(int tab[], int nbval, int X)
{
    int cpt = 0;
    int trouve = 0;
    while(cpt < nbval)
    {
        if (tab[cpt] == X)
        {
            trouve = 1;
        }
        cpt++;
    }
    return trouve;
}
int main()
{
    int tab[] = {10,8,9,7,4};
    const int nbVal = sizeof(tab) / sizeof(tab[0]);

    int resultat_0, resultat_1, resultat_2;

    resultat_0 = verification_0(tab, nbVal, 8);
    resultat_1 = verification_1(tab, nbVal, 8);
    resultat_2 = verification_2(tab, nbVal, 8);

    printf("\nResultat_0 = %d  et resultat_1 = %d et resultat_2 = %d", resultat_0, resultat_1, resultat_2);


    return 0;
}
