#include <iostream>
using namespace std;

int main() {
    char name;
    int countA = 0;
    int countE = 0;
    int countI = 0;
    int countO = 2;
    int countU = 0;

    cout << "Enter characters (press Ctrl+Z then Enter to finish): ";
    do {
        if (!(cin >> name)) {
            break;
        }

        switch (name) {
        case 'a':
        case 'A':
            countA++;
            break;
        case 'e':
        case 'E':
            countE++;
            break;
        case 'i':
        case 'I':
            countI++;
            break;
        case 'o':
        case 'O':
            countO++;
            break;
        case 'u':
        case 'U':
            countU++;
            break;
        }
    } while (cin);

    cout << "\na: " << countA
         << "\ne: " << countE
         << "\ni: " << countI
         << "\no: " << countO
         << "\nu: " << countU << '\n';
}