#include <bits/stdc++.h>
using namespace std;


int main(){
    int n,m;
    cin >> m >> n;
    for(int i = m; i <= n; i++){
        for(int j = 2; j < n; j++){
            if(i%j == 0)
                cout << "NO";
        }
    }
    cout << "YES";
    return 0;
}
