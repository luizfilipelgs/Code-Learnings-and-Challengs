//Incremento e Decremento de Variáveis, Operadores pós e pré-fixados
#include <iostream>
#include "../Utils/utf8_config.h"

using namespace std;

int main() {
  int n1, n2; // Declarando variavel sem atribuir valor

  n1 = 0; // Inicializando variavel 
  n2 = 10;

  cout << endl << "Antes do Incremento: "<< n1 << " - " << n2 << endl;

  n1 = n1 + 1;
  n2 = n2 + 1;
  cout << "Apos Incremento padrão: "<< n1 << " - " << n2 << endl;

  n1++;
  n2++;
  cout << "Apos Incremento resumido (+1): "<< n1 << " - " << n2 << endl;

  n1 = n1 + 4;
  n2 = n2 + 8;
  cout << "Apos Incremento padrão de 4 e 8: "<< n1 << " - " << n2 << endl;

  n1 -= 6;
  n2 -= 10;
  cout << "Apos Decremento resumido 6 e 10: "<< n1 << " - " << n2 << endl;

  /* Podemos usar outros operadores, como *,/ :
    n1 = n1 * 10   n1*=10
  */

  /* Pós e Pré fixado:
    Pós: n++  Pré: ++n
    Quando Utilizado o Pós fixado, usasse primeiro o valor da variavel e depois se faz o incremento, 
    no pré é o contrario.

    Em caso de incremento ou decremento inline, deve utilizar o Pré
    cout << ++n; pois se usado o PÓS ele ira imprimir apenas o valor de N.
  */
  return 0;
}
