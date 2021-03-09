//標準関数をすべてインクルードする。
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
    int N, S, D; cin >> N >> S >> D;
    int X, Y;

    int res = 0;

    for(int i = 0; i < N; ++i){
        cin >> X >> Y;
        if(X < S && Y > D)  res = 1;
    }

    if (res) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}