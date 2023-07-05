#include <iostream>
#include "../Utils/utf8_config.h"

using namespace std;

int n1=5, n2=2; // Var Globais
float nf1=5.0, nf2=2.0;

int main() {
  setupUTF8Console();

  // Operador de adição (+)
  int soma = n1 + n2;

  // Operador de subtração (-)
  int subtracao = n1 - n2;

  // Operador de multiplicação (*)
  int multiplicacao = n1 * n2;

  // Operador de divisão (/)
  float divisao = nf1 / nf2;

  // Operador de módulo/resto da divisão (%)
  int modulo = n1 % n2;

  // Operador de incremento (++)
  int numero = 5;
  numero++;

  // Operador de decremento (--)
  int valor = 8;
  valor--;

  // Exibindo os resultados
  cout << endl << "Soma: " << soma << endl;
  cout << "Subtracao: " << subtracao << endl;
  cout << "Multiplicacao: " << multiplicacao << endl;
  cout << "Divisao: " << divisao << endl;
  cout << "Modulo: " << modulo << endl;
  cout << "Numero: " << numero << endl;
  cout << "Valor: " << valor << endl;

  return 0;
}
