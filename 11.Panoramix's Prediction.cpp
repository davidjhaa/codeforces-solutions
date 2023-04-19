#include <bits/stdc++.h>
using namespace std;


int main(){
    int n,m;
    cin >> m >> n;
    for(int i = m + 1; i < n; i++){
        int flag = 0;
        for(int j = 2; j*j <= n; j++){
            if(i%j == 0){
                flag = 1;
            }
        }
        if(flag != 1){
            cout << "NO";
            return 0;
        }
    }
    for(int j = 2; j*j <= n; j++){
            if(n%j == 0){
                cout << "NO";
                return 0;
            }
        }
    cout << "YES" << "\n";
    return 0;
}
