#include <iostream>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int ans = 2; // track of max value of length
    int length = 2; // length of curr contiguous subarray
    int diff = a[0] - a[1];
    for (int i = 2; i < n; i++){
        int new_diff = a[i - 1] - a[i];
        if (new_diff == diff){
            length++;
        }
        else{
            ans = max(ans, length);
            length = 2;
            diff = new_diff;
        }
    }
    ans = max(ans, length);
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