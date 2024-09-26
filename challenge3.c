#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i;
    float somme;
    
    printf("Entrer un nombre pour calcule la somme des premiers nombres naturels\t");
    scanf("%d",&n);

somme=0;

for (i=1; i<=n; i++)
somme = somme + i;

printf("la factorielle de nombre %d est : %.2f",n,somme);
    return 0;
}