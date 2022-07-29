//На вход дано натуральное число N. Выведите его в двоичной системе счисления без ведущих нулей.


#include <iostream>
#include <string>


using namespace std;


int main()
{
    cout << "Программа отработает 5 раз " << "\n";
    string close = " ";
    while (close != "N") {

        int n;
       
        string b = "";

        cin >> n;

        while (n > 0) {


            b = to_string(n % 2)+b;
            //cout << b << " ";
            n =n / 2;
            //cout <<n<<" ";


        }
        cout << b << "\n";
        cout << "Если хотите закончить введите N, если нет - любой другой знак ";
        cin >> close;
    }

    return 0;

}