#include <iostream>
#include <cmath>

int main()
{
    double a, b, c, res, d, x1, x2,f;
    
    std::cin >> a >> b >> c;
    f = pow(b,2);
    d = f-4*(a*c);
    if (d < 0) {
        x1 = (-b + sqrt(d)) / 2 * a;
        x2 = (-b - sqrt(d)) / 2 * a;
        std::cout << x1 << x2;
    }
    else if (d == 0) {
        x1 = -b / 2*a;
        std::cout << x1;
    }
    else if (d < 0) {
        std::cout << "Действительных корней нет";
    }
    else {
        std::cout << "Проблема с вводом";
    }
    return 0;
}