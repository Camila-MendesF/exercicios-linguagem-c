#include<stdio.h>
int main()
{
    float nota1, nota2, freq, media;
    printf ("Entre com a nota 1: ");
    scanf ("%f",&nota1);
    printf ("entre com a nota 2: ");
    scanf ("%f", &nota2);
    printf ("Entre com a frequencia: ");
    scanf ("%f", &freq);
    media = (nota1 + nota2)/2;
    printf ("Sua media: %f",media);
    printf ("\nSua frequencia: %f",freq);
    if (media >= 6 && freq >= 75) {
        printf ("Parabens. Aprovado!\n");
    }
    else{
        printf ("Sinto muito! reprovado");
    }
    return 0;
}
