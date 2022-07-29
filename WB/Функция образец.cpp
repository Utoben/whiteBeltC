#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool Contains(vector<string> words, string w) {
    for (auto s: words){
        if(s==w){
            return true;
        }else{  
            return false;
        }
    }
}

int main(){
    cout << Contains({"air", "water","fire"}, "fire");
    return 0;
}