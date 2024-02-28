/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int
main ()
{

  //Declarando variC!veis
  char nome[50];
  int idade;
  float primeiraNota;
  float segundaNota;
  float media;


  //Coletando dados do usuC!rio 

  printf ("Digite seu Nome: ");
  scanf ("%s", &nome);

  printf ("Digite a sua Idade: ");
  scanf ("%i", &idade);

  printf ("Digite a sua Primeira Nota: ");
  scanf ("%f", &primeiraNota);

  printf ("Digite a sua Segunda Nota: ");
  scanf ("%f", &segundaNota);


  media = (primeiraNota + segundaNota) / 2;
  //Exibindo dados para o usuC!rio

  printf ("\n============= R E S U L T A D O S ============\n");
  printf ("\nNome: %s", nome);
  printf ("\nIdade: %i", idade);
  printf ("\nPrimeira Nota: %f", primeiraNota);
  printf ("\nSegunda Nota: %f", segundaNota);
  printf ("\nMédia: %f", media);

  return 0;
}
