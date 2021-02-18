#include <iostream>
using namespace std;

void solve(){
    string str;
    cin >> str;
    int ans = 0, kicks = 0;
    for (int i = 0; i < str.length(); i++){
        if (str.substr(i, 4) == "KICK")
            kicks++;
        if (str.substr(i, 5) == "START")
            ans += kicks;
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