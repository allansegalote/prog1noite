/*/****************************************************
* Trab 2 : Numeros Primos
* Nome: Allan Segalote Matheus  Matricula: 0050014882
* Professor: Alex Salgado
*****************************************************/
#include <stdio.h>

int main()
{
//numero primo Ž todo numero que s— Ž divisivel por 1 e por ele mesmo
//Logo todo numero primo tem 2 divisores apernas, se passar de 2 nao eh primo

int num= -1;
int i;
int divisores = 0;
int resposta;



do{
        /*while(num<0){ <<<<<<<<<< ta bugando quando responde se quer continuar*/
printf("\nEntre com um numero positivo: \n");
        scanf("%d",&num);
        /* } <chave do while*/


for(i=1;i<=num;i++){
    if(num % i == 0){
    divisores++;
    }
}

if(divisores == 2){
    printf("\nO numero %d eh primo\n",num);
    printf("\nDeseja continuar (1-Sim/2-Nao) ?\n");
    scanf("%d",&resposta);
}
if(divisores > 2){
    printf("\nO numero %d nao eh primo\n",num);
    printf("\nDeseja continuar (1-Sim/2-Nao) ?\n");
    scanf("%d",&resposta);
}
}while(resposta == 1);

printf("\nObrigado, ate a proxima! Para ver o meu codigo entre no link \n");

return 0;
}
