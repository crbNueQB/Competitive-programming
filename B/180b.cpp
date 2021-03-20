//標準関数をすべてインクルードする。
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> X(N);
    long man = 0;
    long yuc = 0;
    long cheb = 0;
    cout << fixed << setprecision(15);
    for (int i = 0; i < N; ++i){
        cin >> X.at(i);
        man += abs(X[i]);
        yuc += abs(X[i]) * (long)abs(X[i]);
        cheb = max(cheb, (long)abs(X[i]));
    }

    cout << man << endl;
    cout << sqrt(yuc) << endl;
    cout << cheb;
    return 0;
}