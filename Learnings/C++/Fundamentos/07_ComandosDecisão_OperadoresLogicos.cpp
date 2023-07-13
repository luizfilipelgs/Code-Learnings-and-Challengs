#include <iostream>
#include <string>
#include "../Utils/utf8_config.h"

using namespace std;

int main() {
  setupUTF8Console();
  
  int horas;
  string cafe = "Esta na hora do café da manhã";
  string almoco = "Esta na hora de almoçar";
  string janta = "Esta na hora de jantar";
  
  cout << endl << "Que horas são ?" << endl;
  cin >> horas;

  if (horas >= 7 && horas <= 9) {
    cout << endl << cafe << endl;
  } else if (horas >= 11 && horas <= 13) {
    cout << endl << almoco << endl;
  } else if (horas >= 18 && horas <= 20) {
    cout << endl << janta << endl;
  } else {
    cout << endl << "Espere a hora da proxima refeição" << endl;
  }

  if (horas) {
    cout << endl << "ok";
  }

  return 0;
}
