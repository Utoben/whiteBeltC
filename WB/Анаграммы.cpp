//Анаграммы

#include <iostream>
#include <string>
#include <vector>
#include <map>


using namespace std;

/*void printVector(const vector<string>& v) {

    for (string s : v) {
        cout << s << endl;

    } 

}*/

map<char, int> BuildCharCounters(string& s) {

    map<char, int> counters;
    for (const char& i : s) {
        ++counters[i];
    }
    return counters;
}

int main() {
    int n;
    cin >> n;
   
   //printVector(v);
   for (int i = 0; i < n; ++i) {
       string firstWord, secondWord;
       cin >> firstWord >> secondWord;

       map<char, int> count1 = BuildCharCounters(firstWord);
       map<char, int> count2 = BuildCharCounters(secondWord);
       if (count1 == count2) {
           cout << "YES" << endl;
       }
       else {
           cout << "NO" << endl;
       }
   }

   
    return 0;
}


