#include <stdio.h>

// bilbioteca personalizada
#include "../include/pessoa.h"
#include "../include/tools.h"

int main()
{
  char nome[50];
  const char ver[] = "caferaC alpha v0.011"; // versão
  int idade;
  
  // horário da compilação
  hora_comp();
  printf("\n");
  data_comp();

  // Sobre
  printf("\n%s\n\n", ver);

  // entrada nome
  set_nome(nome, sizeof(nome));
  
  // entrada idade
  set_idade(&idade);
  
  // exibe dados vindo de um módulo
  exibir_mensagem (nome, idade);
  
  return 0;
}
