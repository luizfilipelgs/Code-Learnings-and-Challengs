#include <iostream>
#include "../Utils/utf8_config.h"
using namespace std;



int main() {
  setupUTF8Console();
  int n = 0;

  while (n < 5) {
    n++;
    cout << endl << " valor de n agora é: " << n ;
  }

// do while executa primeiro o codigo pra depois verificar condição
  do {
    n--;
    cout << endl << " valor de n agora é: " << n ;
  } while (n >= 1);

  return 0;
}

// break encerra loop, podendo ser colocado em uma condicional especifica para parar o loop antes da sua condição geral