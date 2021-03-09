//標準関数をすべてインクルードする。
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K; cin >> N >> K;
    int res=0;
    res = N % K;
    if (res != 0) res = 1;
    cout << res << endl;
}