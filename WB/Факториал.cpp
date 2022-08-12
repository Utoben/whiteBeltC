//Напишите функцию, которая
//называется Factorial
//возвращает int
//принимает int и возвращает факториал своего аргумента.Гарантируется, что аргумент функции по модулю не превышает 10. Для отрицательных аргументов функция должна возвращать 1.

#include <iostream>


using namespace std;

int Factorial(int var1) {
    //int i, t;
    //cin >> i >> t;

    if (var1 < 1) {
        return 1;
    }
    else if (var1 > 10) {
        cout << "Value must be less then 10";
    }
    else {
        
        var1 = var1 * (Factorial((var1 - 1)));
        return var1;
    }
}

int main() {
    int i;
    cout << "Need a value. Value must be less then 10: ";
    cin >> i;
    cout << Factorial(i);
    return 0;
}