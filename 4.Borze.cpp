#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str;
    string ans = "";
    int i = 0;
    while(i < str.length()){
        if(str[i] == '-'){
            if(str[i+1] == '-')
                ans += '2';
            else    
                ans += '1';
            
            i += 2;
        }
        else{
            ans += '0';
            i++;
        }
    }
    cout << ans << "\n";
    return 0;
}