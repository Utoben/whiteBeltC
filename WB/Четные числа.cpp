//Чётные числа
//Дано два целых числа A и B(A <= B, A >= 1, B <= 30000).Выведите через пробел все чётные числа от A до B(включительно).

//Для проверки целого числа x на чётность используется операция взятия остатка от деления на 2, которая в C++ оформляется с помощью символа "%".Например,

#include <iostream>
//#include <cmath>
using namespace std;


int main()
{
    cout << "Программа отработает несколько раз " << "\n";
    string close = " ";
    while (close!="N" ){
    

        double A, B;
        cin >> A >> B;

        for (int j = A; j < B; j++) {

            if (j % 2 == 0) {

                cout << "Result: " << j << " ";
            }

        }
        cout << "Если хотите закончить введите N, если нет - любой другой знак ";
        cin >> close;
    }
    
    return 0;

}