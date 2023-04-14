#include<bits/stdc++.h>
using namespace std;

int main(){
   string s;
   cin >> s;

   int small = 0;
   int large = 0;
   int flag = 0;

   for(auto i : s){
    if(i >= 'a' && i <= 'z')
        small++;
    if(i >= 'A' && i <= 'Z')
        large++;
   }

   if(small >= large)
    flag = 1;

    for(auto i : s){
        char ch;
        if(flag == 1){
            ch = tolower(i);
            cout << ch;
        }
        else{
            ch = toupper(i);
            cout << ch;
        }
    }
    cout << "\n";
    return 0;
}