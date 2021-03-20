//標準関数をすべてインクルードする。
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
    int N, A, B; cin >> N >> A >> B;
    int res = N - A + B;
    cout << res << endl;
    return 0;
}