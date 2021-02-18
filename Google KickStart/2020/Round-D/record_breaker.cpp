#include <iostream>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int ans = 0; // record breaking days
    int mx = -1;
    for (int i = 0; i < n; i++){
        if (a[i] > mx && (i == n - 1 || a[i] > a[i + 1]))
            ans++;
        mx = max(mx, a[i]);
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