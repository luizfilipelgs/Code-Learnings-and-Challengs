#ifdef _WIN32
#include <windows.h>
#endif

// Função para configurar a codificação UTF-8
inline void setupUTF8Console() {
  #ifdef _WIN32
  SetConsoleOutputCP(CP_UTF8);
  #endif
}


/* Arquivo de configuração para codificação de caracteres utilizada para a saída do console.

Em seus programas C++, inclua o arquivo de cabeçalho utf8_config.h e chame a função setupUTF8Console() no início do main() para configurar a codificação. Por exemplo:

EX:

#include <iostream>
#include "utf8_config.h"

int main() {
  setupUTF8Console();

  // Resto do código

  return 0;
}
Dessa forma, sempre que você precisar configurar a codificação UTF-8 em seus programas, basta incluir o arquivo de cabeçalho utf8_config.h e chamar a função setupUTF8Console() no início do main(). Isso evitará a necessidade de repetir o código de configuração em cada programa individualmente.

Lembre-se de que você precisará ter o arquivo utf8_config.h disponível em todos os projetos em que deseja usar essa configuração.
*/





