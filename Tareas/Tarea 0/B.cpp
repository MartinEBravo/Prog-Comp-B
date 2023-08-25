#include <iostream>
#include <string>
using namespace std;
typedef long long ll;

int main(){
    int n; cin >> n;
    while(n--){
        string p = "";
        for (int i = 0; i < 8; i++){
            string s; cin >> s;
            for (int j = 0; j < 8; j++){
                if (s[j] != '.'){
                    p += s[j];
                }
            }
        }
        cout << p << endl;
    }
    return 0;
}

