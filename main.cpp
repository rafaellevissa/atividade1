#include <stdio.h>
#include <stdbool.h>

int nota;
int opcao;
int quantidade=0;
int soma;
float media;

int main(){
  while(true){
    printf("Menu - Digite a opção desejada: \n");
    printf("1- digitar notas \n");
    printf("2- calcular média \n");
    printf("3- sair \n");
    scanf("%d", &opcao);

    if (opcao == 1){
      soma=0;
      printf("quantas notas irá digitar? \n");
      scanf("%d", &quantidade);
      for(int i=0;i<quantidade;i++){
        printf("Digite a nota: ");
        scanf("%d", &nota);
        soma=soma+nota;
      }
      media=soma/quantidade;
    }
    if (opcao == 2){
      printf("Media: %.2f \n", media);
    }
    if (opcao ==3){
      return 0;
    }
  }
}