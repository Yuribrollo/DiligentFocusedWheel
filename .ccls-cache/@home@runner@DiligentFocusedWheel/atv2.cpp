#include <iostream>

using namespace std;



int main() {

    float nota1, nota2, media;

    cout << "Digite a primeira nota: ";

    cin >> nota1;

    cout << "Digite a segunda nota: ";

    cin >> nota2;

    // Calcule a média simples das duas notas e exiba o resultado

    // Dica: a média simples é a soma das duas notas dividida por 2.

    media = (nota1 + nota2) / 2;

    cout << "media: " << media << endl;
    

    return 0;

}