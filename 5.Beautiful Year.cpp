#include<bits/stdc++.h>
using namespace std;

int main(){
    int year;
    cin >> year;
    while(true){
        year++;
        int ans = year;
        int a = year%10;
        year = year/10;
        int b = year%10;
        year = year/10;
        int c = year%10;
        year = year/10;
        int d = year%10;

        if(a != b && a != c && a != d && b != c && b != d && c != d){
            cout<< ans << "\n";
            break;
        }
        year = ans;
    }
    return 0;
}