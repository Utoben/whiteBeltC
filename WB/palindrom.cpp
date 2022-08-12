//Напишите функцию, которая
//проверяет палиндром ли слово


#include <iostream>
#include <string>

using namespace std;

bool isPalindrom(string word) {
    //int i, t;
    //cin >> i >> t;
    int len = word.length();
    for (int i = 0; i < len / 2; ++i) {
        if (word[i] != word[len - i - 1]){
            return false;
        }
    }
    return true;
}



int main() {
    string str;
 
    cout << "Enter the word: ";
    cin >> str;
    if (isPalindrom(str)) {
        cout << "Word is palindrom";
    }
    else {
        cout << "Word is not Palindrom";
    }

    return 0;
}


