#include <iostream>
using namespace std;

void solve(){
    long long int n, k, s;
    cin >> n >> k >> s;
    long long int ans1 = n + k;
    long long int ans2 = k - 1 + k - s + (n - s + 1);
    long long int ans = min(ans1, ans2);
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