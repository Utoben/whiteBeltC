//Даны значения температуры, наблюдавшиеся в течение N подряд идущих дней. Найдите номера дней (в нумерации с нуля) со значением температуры выше среднего арифметического за все N дней.

//Гарантируется, что среднее арифметическое значений температуры является целым числом.

//Выведите два числа - первое число K — количество дней, значение температуры в которых выше среднего арифметического. Затем K целых чисел — номера этих дней.

//Напишите функцию MoveStrings, которая принимает два вектора строк, source и destination, и дописывает все строки из первого вектора в конец второго.
//После выполнения функции вектор source должен оказаться пустым.


#include <iostream>
#include <string>
#include <vector>



using namespace std;

int temperatureValue(int dayInput, vector<int> tempInput) {

    int a, arithmetic_mean;
    int avg_temp = 0;

    for (int i = 0; i < dayInput; i++) {
        cin >> a;
        tempInput.push_back(a);
        avg_temp += tempInput[i];
    }

    arithmetic_mean = avg_temp / tempInput.size();
        
    cout << arithmetic_mean;

    int dayS = 0;
    for (auto s : tempInput) {
        if (s > arithmetic_mean) {
            cout << s;
            dayS = s;
        }
    }
    return dayS;
}
    


int main() {
    int day;
    cin >> day;
    vector<int> temp = {};

    temperatureValue(day,temp);

    return 0;
}


