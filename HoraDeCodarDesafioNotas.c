#include <stdio.h>
/*Inicio
pegar nota 1
pegar nota 2
pegar nota 3
pegar nota 4
calcular a media 
media = nota1 + nota2 + nota3 + nota4
media /4 
resultado da media
*/
int main(){
    float nota1, nota2, nota3, nota4;
    float media;

    printf("Digite nota 1: \n");
    scanf("%f", &nota1);

    printf("Digite nota 2: \n");
    scanf("%f", &nota2);

    printf("Digite nota 3: \n");
    scanf("%f", &nota3);

    printf("Digite nota 4: \n");
    scanf("%f", &nota4);


    media = (nota1 + nota2 + nota3 +nota4) / 4;

    printf("A media das notas são: %.2f", media);
    return 0;

}
