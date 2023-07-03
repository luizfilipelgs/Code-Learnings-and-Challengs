#include <iostream>
#include <string>

using namespace std;


int main(){
  int numeroInteiro = 1;
  char letra = 'A'; //armazenar um único caractere
  double numeroDecimal01 = 10.59999; // Maior precisão
  float numeroDecimal02 = 10.5; // Menor precisão.
  bool isDia = true; // 1 ou 0
  string texto = "Hello Word";

  cout << "digite uma Letra: ";
  cin >> letra; // Pega apenas o primeiro texto, encerrando após espaço

  cout << "digite um numero: ";
  cin >> numeroInteiro;

  cout << "digite um numero decimal: ";
  cin >> numeroDecimal01;

  cout << "digite outro numero decimal: ";
  cin >> numeroDecimal02;

  cout << "digite um texto: ";
  getline(cin, texto); // Pega a Linha toda.
  cout << " ";

  cout << endl << numeroInteiro << endl;
  cout << letra << endl;
  cout << numeroDecimal01 << endl;
  cout << numeroDecimal02 << endl;
  cout << isDia << endl;
  cout << texto << endl;
  cout << "----------------------\n";


  cout << numeroInteiro << endl << letra << endl << numeroDecimal01 << endl << numeroDecimal02 << endl << isDia << endl << texto << endl; // imprimindo com apenas um cout
  
  return 0;
}
