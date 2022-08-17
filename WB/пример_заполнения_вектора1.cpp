


#include <iostream>
#include <string>
#include <vector>



using namespace std;

void BuildCharCounters(const vector<string>& v) {

    for (string s : v) {
        cout << s << endl;

    } 


    
}
    


int main() {
    int n;
    cin >> n;

    vector<string> v(n);
    for (string& s : v) {
        cin >> s;
    }
   
    BuildCharCounters(v);
    return 0;
}


