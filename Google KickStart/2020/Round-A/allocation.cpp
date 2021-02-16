#include <iostream>
#include <algorithm>
using namespace std;

void solve(){
    int n, b;
    cin >> n >> b;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int ans = 0;
    for (int i = 0; i < n; i++){
        if (b >= arr[i] ){
            ans++;
            b = b - arr[i];
        }
    }
    cout << ans << endl;
}

int main(){
    int t;
    cin >> t;
    int c = 0;
    while (t--){
        c++;
        cout << "Case #" << c << ": ";
        solve();
    }
    return 0;
}