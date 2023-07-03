#include <iostream>
#include <string>
#include <random>

using namespace std;

int main() {
    random_device rd;  // Obtém um dispositivo de geração de números aleatórios

    string prosseguir = "";

    int min = 2;   // Valor mínimo do intervalo
    int max = 10;  // Valor máximo do intervalo

    cout << "Vamos Jogar um jogo, siga as instrucoes a seguir \n";
    cout << "Pense em qualquer numero, e nao me diga, apos concluir digite 'ok': ";
    cin >> prosseguir;

    mt19937 gen(rd()); // Inicializa um gerador de números aleatórios

    uniform_int_distribution<> dis(min, max);  // Define a distribuição uniforme

    double numeroMagico;

    do {
        int randomNum = dis(gen);  // Gera um número aleatório dentro do intervalo [min, max]
        numeroMagico = randomNum / 2.0;

        cout << "---\n";
        cout << "Multiplique por 2, apos concluir digite 'ok': ";
        cin >> prosseguir;
        cout << "---\n";
        cout << "some o resultado da multiplicacao com " << randomNum << ", apos concluir digite 'ok': ";
        cin >> prosseguir;
        cout << "---\n";
        cout << "Divida o resultado da etapa anterior por 2, apos concluir digite 'ok': ";
        cin >> prosseguir;
        cout << "---\n";
        cout << "Subtraia do valor encontrado o numero que voce pensou no comeco do jogo, apos concluir digite 'ok': ";
        cin >> prosseguir;
        cout << "---\n";
        cout << "O resultado deu: " << numeroMagico << endl;

        cout << "Deseja jogar novamente? (s/n): ";
        cin >> prosseguir;
    } while (prosseguir == "s");

    return 0;
}
