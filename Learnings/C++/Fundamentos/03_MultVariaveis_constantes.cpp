#include <iostream>
#include <string>
#include "../Utils/utf8_config.h"

using namespace std;

#define dataNacimento "13/06/1995"
#define curiosidade01  cout << "Curiosidade: É possivel associar comandos ao define, como por exemplo um cout << ... \n\n"

int main(){
  setupUTF8Console();

  string nome="luiz filipe", sobreNome="de Lima Gomes Santos", endereco="Av.Muniz Falcao, 205";
  cout << "\n\n" << nome << " " << sobreNome << " nascido em " << dataNacimento << " que mora no endereço: " << endereco << "\n\n";
  curiosidade01;

  return 0;
}
