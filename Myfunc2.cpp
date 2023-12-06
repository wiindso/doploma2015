#include <iostream>
#include "windows.h"
using namespace std;
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int x, y, z;
    cout << "Введіть значення x: ";
    cin >> x;
    cout << "Введіть значення y: ";
    cin >> y;
    cout << "Введіть значення z: ";
    cin >> z;
    int resultC = (int)x - y * z;
    cout << "Результат з використанням приведення типу в стилі мови С: " << resultC << endl;
    return 0;
}