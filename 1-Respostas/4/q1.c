#include <stdio.h>
#include <stdlib.h>
//Observa��es:
// int fwrite(const void *ptr, int size, int n, FILE *arq)
// ptr : � um ponteiro para void(qualquer tipo de ponteiro) contem o endee�o que pretender guarda no arquivio
//size indicado em bytes de cada elemento que pretendemos escrever
// n indica o n�mero de elementos que queremos escever
//arq descritor, indica o arquivo onde os dados sr�o colocados

int main()
{
  // criando a vari�vel ponteiro para o arquivo
  FILE *pont_arq;
  char v[100]= "ola mundo\n";
 
  //abrindo o arquivo
  pont_arq = fopen("olamundo.txt", "wb");
 // if(fwrite(v, sizeof(char),100 , pont_arq) != 100)
  if(fwrite(v, sizeof(char),100 , pont_arq))
  // fechando arquivo
  fclose(pont_arq);
 
  //mensagem para o usu�rio
  printf("O arquivo foi  criado com sucesso!\n");
 
  system("pause");
  return(0);
}
