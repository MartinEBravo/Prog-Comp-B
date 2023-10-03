#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

int factorial(int n){
    int ans = 1;
    for(int i=1; i<=n; i++) ans *= i;
    return ans;
}

int permutacionRepeticion(int n, int P, int H, int S){
    vector<vector<vector<int>>> dp(P+1, vector<vector<int>>(H+1, vector<int>(S+1, 0)));
    dp[0][0][0] = 1;
    for(int i=0; i<=P; i++){
        for(int j=0; j<=H; j++){
            for(int k=0; k<=S; k++){
                if(i>0) dp[i][j][k] += dp[i-1][j][k];
                if(j>0) dp[i][j][k] += dp[i][j-1][k];
                if(k>0) dp[i][j][k] += dp[i][j][k-1];
            }
        }
    }
    return dp[P][H][S] * factorial(n);
}

int main(){
    int P, H, S; cin >> P >> H >> S;
    int n = P + H + S;
    cout << permutacionRepeticion(n, P, H, S) << endl;
}