#include <iostream>

using namespace std;

int main() {

    int numeros[5];

    for (int i = 0; i < 5; i++) {

        cout << "Digite o valor para a posição " << i << ": ";

        cin >> numeros[i];

    }

    // Complete o código para exibir os valores do vetor
    for (int i = 0; i < 5; i++){

        cout << numeros[i] << " " << endl;
    }

    return 0;
}
