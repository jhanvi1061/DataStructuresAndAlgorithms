#include <iostream>
using namespace std;

void solve(){
    int a, b;
    cin >> a >> b;
    int n;
    cin >> n;
    while (n--){
        int q = (a + b) / 2;
        cout << q << endl;
        string result;
        cin >> result;
        if (result == "CORRECT")
            break;
        else if (result == "TOO_SMALL")
            a = q + 1;
        else if (result == "TOO_BIG")
            b = q - 1;
    }
}

int main(){
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}