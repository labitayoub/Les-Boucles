#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i;
    float f;
    do
    {
    printf("Entrer le nombre pour calcule la factorielle\t");
scanf("%d",&n);
    } while (n<0);

f=1;
for (i=1; i<=n; i++){
f *=i;
}
printf("la factorielle de nombre %d est : %.2f",n,f);
    return 0;
}