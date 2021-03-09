//標準関数をすべてインクルードする。
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
    int N; cin >> N;
    vector<int> A(N);
    vector<int> B(N);

    for (int i = 0; i < N; ++i){
        cin >> A.at(i) >> B.at(i);
    }
    int res = 1000000000;
    for (int i = 0; i < N; ++i){
        for (int j = 0; j < N; ++j){
            if(i == j) res = min(res, A[i] + B[j]);
            else {
                int a = max(A[i], B[j]);
                res = min(res, a);
            }
        }
    }
    cout << res << endl;
    return 0;
}