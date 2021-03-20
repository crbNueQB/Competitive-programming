//標準関数をすべてインクルードする。
#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    if(S[S.length() - 1] == 's')    S += "es";
    else S += "s";

    cout << S << endl;
    return 0;
}