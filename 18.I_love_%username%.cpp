#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int lowest = INT_MAX;
    int highest = INT_MIN;
    int count = 0;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if(i == 0){
            lowest = x;
            highest = x;
        }
        else{
            if(x < lowest){
                lowest = x;
                count++;
            }
            else if(x > highest){
                highest = x;
                count++;
            }
        }
    }
    cout << count << "\n";
	return 0;
}