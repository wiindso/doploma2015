#include <iostream>
#include "windows.h"
using namespace std;
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n, m, s;
    cout << "Введіть значення n: ";
    cin >> n;
    cout << "Введіть значення m: ";
    cin >> m;
    cout << "Введіть значення s: ";
    cin >> s;
    int resultC = (int)m - n * s;
    cout << "Результат з використанням приведення типу в стилі мови С: " << resultC << endl;
    return 0;
}
