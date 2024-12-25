#include <iostream>

using namespace std;

int main() {
    // Оголошення змінних для координат точки
    int x, y;

    // Введення координат
    cout << "Vvedite koordinaty tochki (x, y): ";
    cin >> x >> y;

    // Визначення положення точки
    if (x == 0 && y == 0) {
        // Точка збігається з початком координат
        cout << "0" << endl;
    }
    else if (x == 0) {
        // Точка лежить на осі OY
        cout << "2" << endl;
    }
    else if (y == 0) {
        // Точка лежить на осі OX
        cout << "1" << endl;
    }
    else {
        // Точка не лежить на координатних осях
        cout << "3" << endl;
    }

    return 0;
}