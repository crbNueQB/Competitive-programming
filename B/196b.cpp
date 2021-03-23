//標準関数をすべてインクルードする。
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
    string s;
    cin >> s;
    string res = "";
    for(int i = 0; i < s.length(); ++i){
        if(s[i] != '.') res += s[i];
        else break;
    }
    cout << res << endl;

    return 0;
}