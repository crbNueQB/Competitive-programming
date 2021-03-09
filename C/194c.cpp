//標準関数をすべてインクルードする。
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
    int N; cin >> N;
    vector<int> A(N);
    int n = 401;
    vector<long long> B(n);

    for (int i = 0; i < N; ++i){
        cin >> A.at(i);
        B[A[i]+200]++;
    }
    long long res = 0;
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < i; ++j){
            res += B[i] * B[j] * (i - j) * (i - j);
        }
    }

    cout << res << endl;
    return 0;
}