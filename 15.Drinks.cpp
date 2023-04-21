#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    double sum = 0;
    for(int i = 0; i < n; i++){
        double c;
        cin >> c;
        sum += c;
    }
    double ans = sum/n;
    cout << ans << "\n";
    return 0;
}