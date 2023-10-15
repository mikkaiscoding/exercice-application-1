#include <stdio.h>
int main(){
    float v, a, c;
    printf("Saississez 1 entiers \n");
    scanf("%f", &v);
    printf("Vous avez saisis %2.f, saissisez un autre entier\n", v);
    scanf("%f", &a);
    printf("vous avez saisis %2.f et %2.f\n", v, a);
    c = v * a;
    printf("Le produit de %2.f et %2.f est %2.f\n", v, a, c);
}