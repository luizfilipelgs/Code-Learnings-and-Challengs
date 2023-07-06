#include <iostream>

using namespace std;

int main() {
  int num = 10;
  cout << endl <<  num << endl;

  num = num * -1; // metodo tradicional
  cout << endl <<  num << endl;

  cout << endl <<  -num << endl; // só inverte na impressão, e não na variavel num

  num = -num; // forma simplificada
  cout << endl <<  num << endl;

  return 0;
}

