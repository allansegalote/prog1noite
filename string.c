#include <stdio.h>
#include <string.h>

int main(){

char nome[20];
int tamanho, i;


printf("Digite seu nome: ");
scanf("%s", &nome);

tamanho = strlen(nome);

printf("Bom dia %s \n", nome);
printf("Seu nome tem %d caracteres \n", tamanho);
printf("Sua inicial eh %c \n", nome[0]);

for(i=0;i<=tamanho;i++){
printf("%c \n", nome[i]);
}

return 0;
}









