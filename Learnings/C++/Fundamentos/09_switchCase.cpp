#include <iostream>
#include "../Utils/utf8_config.h"
using namespace std;

int main() {
  setupUTF8Console();

  int diaDaSemana;
  cout << endl << "Qual é o dia da semana? " << endl;
  cin >> diaDaSemana;

  switch (diaDaSemana) {
    case 1:
      cout << "Domingo";
      break; // sai do switch
    case 2:
      cout << "Segunda-feira";
      break;
    case 3:
      cout << "Terça-feira";
      break;
    case 4:
      cout << "Quarta-feira";
      break;
    case 5:
      cout << "Quinta-feira";
      break;
    case 6:
      cout << "Sexta-feira";
      break;
    case 7:
      cout << "Sábado";
      break;
    default:
      cout << "Dia da semana inválido";
  }
  cout << endl;

  switch (diaDaSemana) {    //Opção de multiplus Cases 
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
      cout << "WORK";
      break;
    case 1:
    case 7:
      cout << "Day off";
      break;
  }

  return 0;
}


// Obs: Da pra fazer switchs alinhados, 