//標準関数をすべてインクルードする。
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N; 
    cin >> N;

    set<string> a, b;

    for (int i = 0; i < N; ++i){
        string s;
        cin >> s;
        if(s[0] == '!') b.insert(s.substr(1));
        else a.insert(s);
    }
    for (set<string>::iterator it = b.begin(); it != b.end(); it++) {
        set<string>::iterator iss = a.find(*it);
        if(iss != a.end()) {
            cout << *it << endl;
            return 0;
        }
    }   

    cout << "satisfiable" << endl;
    return 0;
}