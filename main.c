#include <stdio.h>
#define velicina 10
/*Za duzinu niza se koristi simbolicka konstanta*/
int main()
{
    int niz[velicina];
    int i;
    /* Unos niza*/
    for ( i = 0; i < velicina; i++ )
    {
        printf("Unesite %i. element niza:", i+1);
        scanf("%i", &niz[i]);
    }
    int j;
    /* Sortiranje niza*/
    for ( i = 0; i < velicina; i++)
    {
        /* Za svaki i-ti element provjeravaju se ostali elementi u nizu kroz j petlju*/
        for ( j = i+1; j < velicina; j++)
        {
            /*
             * Ex:
             * i = 1, niz[i] = 10
             * j = i + 1 = 2, provjeravamo sve ostale elemente u nizu
             * */
            if (niz[j] < niz[i])
            /*
             * Ukoliko je clan niza na koji smo naletjeli veci od trenutnog,
             * pristupi bubble sortiranju
             * */
            {
                int temp = niz[i];
                niz[i] = niz[j];
                niz[j] = temp;
            }
        }
    }
    /*Ispis niza*/
    printf("Sortiran niz: ");
    for ( i = 0; i < velicina; i++ )
        printf("%i ", niz[i]);
    return 0;
}


