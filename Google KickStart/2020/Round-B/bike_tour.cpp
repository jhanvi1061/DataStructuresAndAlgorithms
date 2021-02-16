#include <iostream>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int ans = 0;
    for (int i = 1; i < n - 1; i++){
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]){
            ans++;
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