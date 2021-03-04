#include <iostream>
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int ans = 0;
    bool flag;
    for (int i = 0; i < n - k + 1; i++){
        flag = true;
        for (int j = 0; j < k; j++){
            if (arr[i + j] != k - j){
                flag = false;
                break;
            }
        }
        if (flag)
            ans++;
    }
    cout << ans << endl;
}

int main(){
    int t;
    cin >> t;
    for (int c = 1; c <= t; c++){
        cout << "Case #" << c << ": ";
        solve();
    }
    return 0;
}