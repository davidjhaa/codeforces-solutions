#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int smallest = 0;
    int largest = 0;
    
    for(int i = 0; i < n; i++){
        if(arr[i] > arr[largest]){
            largest = i;
        }
        if(arr[i] <= arr[smallest]){
            smallest = i;
        }
    }

    if(smallest == n-1 && largest == 0){
        cout << 0 << "\n";
        return 0;
    }
    else{
        int ans = 0;
        ans += largest;
        ans += n-1-smallest;
        if(smallest > largest){
            cout << ans << "\n";
        }
        else{
            cout << ans-1 << "\n";
        }
    }
    return 0;
}