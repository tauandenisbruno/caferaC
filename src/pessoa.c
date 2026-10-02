#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// inclui o próprio contrato
#include "../include/pessoa.h"

void exibir_mensagem(const char *nome, int idade)
{
  printf("Olá, %s!\n", nome);
  
  if (idade < 18){
    printf("Você é menor de idade!\n");
  }
  else if (idade >= 18 && idade <60){
    printf("Você é um adulto!\n");
  }
  else{
    printf("Você é um idoso!\n");
  }
}

void set_nome(char *destino, int tamanho){
  printf("Digite seu nome: ");
  
  if(fgets(destino, tamanho, stdin)){
	destino[strcspn(destino, "\n")] = '\0';
  }
}

void set_idade(int *destino){
  char buffer[32];
  printf("digite sua idade: ");
  
  if(fgets(buffer, sizeof(buffer), stdin)){
	*destino = atoi(buffer);
  }
  else{
	*destino = 0;
  }
}
