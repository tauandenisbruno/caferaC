#include <stdio.h>

// personal header
#include "../include/tools.h"

void hora_comp(){
  printf("HORA: %.5s", __TIME__); // exibe o horário de compilação
}

void data_comp(){
  printf("DATA: %s", __DATE__); // exibe a data da compilação
}


