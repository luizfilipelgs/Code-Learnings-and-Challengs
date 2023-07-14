#include <iostream>
#include <string>
#include "../Utils/utf8_config.h"

using namespace std;

int main() {
  setupUTF8Console();
  
  int n1, n2, media;
  string res;
  
  cout << endl << "Digite a 1º nota: " << endl;
  cin >> n1;
  cout << endl << "Digite a 1º nota: " << endl;
  cin >> n2;

  media = (n1+n2)/2;

  (media >= 7 ) ? res="Aprovado" : res="Reprovado";

  cout << endl << "Situação do aluno: " << res  << endl;
  cout << media;

  return 0;
}