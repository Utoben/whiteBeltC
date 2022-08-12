//Напишите функцию, которая
//проверяет палиндром ли слово


#include <iostream>


using namespace std;
int a = 4;
int b = 2;
int UpdateIfGreater(int first, int second) {
    
    if (first > second) {
        second = first;
    }
    return second;
}
    


int main() {
    
    cout << UpdateIfGreater(a, b);

}


