#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);

    int n,a,b,c; cin>>n>>a>>b>>c;

    int cortes = 3;

    if (c > n/3) cortes--;

    if (b > n/2) cortes--;

    if (a > n) cortes--;
    
    cout << cortes << endl;

    return 0;
}
