//標準関数をすべてインクルードする。
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    map<string, int> S;
    set<string> A;

    for(int i = 0; i < N; ++i){
        string B;
        cin >> B;
        S[B]++;
    }
    int m = -1;
    for(auto x: S) m = max(m, x.second);
    for(auto x: S){
        if(m == x.second)    
        cout << x.first << endl;
    }
    return 0;
}