#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1,s2;
    cin >> s1 >> s2;
    string ans ="";
    int i = 0;
    while(i < s1.length()){
        if(s1[i] != s2[i]){
            ans += '1';
        }
        else{
            ans += '0';
        }
        i++;
    }
    cout << ans;
    return 0;
}