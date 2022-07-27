// C++ WhiteBelt.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

// Тренировочное задание по программированию : Деление
//Дано два натуральных числа A и B, не превышающих 1 000 000. Напишите программу, которая вычисляет целую часть частного от деления A на B.

//Если B = 0, выведите "Impossible".*/
#include <iostream>
//#include <cmath>


int main(std::int32_t c, std::int32_t d, std::int32_t result)
{

    double a, b, res, n;
    
    n = 5;

    for (int i = 1; i < n; i++) {

        std::cin >> a >> b;

        if (b != 0) {
            res = int(a / b);
            std::cout << "Result: " << res << "\n" ;
        }
        else {
            std::cout << "Impossible /n";
        }

    }
    return res

}