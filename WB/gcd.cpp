#include <iostream>

int main() {
    // put your code here
    int N, R, T, sum;
    std::cin >> N >> R >> T;
    sum = ((N / 2)+(N%2)) + ((R / 2)+(R%2)) + ((T / 2+(T%2)));
    std::cout << sum;


    return 0;
}