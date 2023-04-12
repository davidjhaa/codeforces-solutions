#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,t;
    string str;
    cin >> n >> t >> str;

    for(int i = 0; i < t ; i++) {
        for(int j = 0; j < str.length(); j++){
            if(str[j] == 'B' && str[j+1] =='G'){
                str[j] = 'G';
                str[j+1] = 'B';
                j++;
            }
        }
    }

    cout << str << "\n";

    return 0;
}