#include <iostream>
#include <windows.h>

using namespace std;

string decode(const string& encoded) {
    string decoded;
    for (char c : encoded) {
        decoded += c - 1;
    }
    return decoded;
}

void printProgressBar(int duration) {
    int progressBarWidth = 50;

    cout << endl;

    for (int i = 0; i <= progressBarWidth; ++i) {
        cout << "[";
        for (int j = 0; j < progressBarWidth; ++j) {
            if (j < i)
                cout << "=";
            else if (j == i)
                cout << ">";
            else
                cout << " ";
        }
        cout << "] " << int((i / static_cast<double>(progressBarWidth)) * 100) << "%\r";
        cout.flush();

        Sleep(duration / progressBarWidth);
    }

    cout << endl;
}

int main() {
    int loadingTime = 5000; // Tempo de carregamento em milissegundos (5 segundos)

    printProgressBar(loadingTime);

    string encodedString = "IBDLFBEP";
    string decodedString = decode(encodedString);
    cout << endl << decodedString << endl;

    cout << endl << " " << endl;
    cin.get();

    return 0;
}
