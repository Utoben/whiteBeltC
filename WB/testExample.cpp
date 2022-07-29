#include <iostream>


using namespace std;


int sum(int a, int b)
{
    int summa;

    //cin >> a >> b;
    summa = a + b;
    ///cout << summa;
    return summa;

}

int main() {
    int result = sum(6, 7);
    //cout << result;
    if (result == 13) {
        cout << "Test1 passed"<< " ";
    }
    else {
        cout << "Test1 failed" << " ";
    }
    int result2 = sum(8, 9);
    if (result2 == 17) {
        cout << "Test2 passed" << " ";
    }
    else {
        cout << "Test2 failed" << " ";
    }
    int result3 = sum(150, -30);
    if (result3 == 120) {
        cout << "Test3 passed" << " ";
    }
    else {
        cout << "Test3 failed" << " ";
    }
    return 0;
}



