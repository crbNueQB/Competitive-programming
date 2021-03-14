//標準関数をすべてインクルードする。
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
    int A, B, W; cin >> A >> B >> W;
    int kW = W * 1000;
    
    int maxres = floor(kW / A); int minres = (kW + (B - 1)) / B;

    if (maxres < minres) cout << "UNSATISFIABLE" << endl;
    else cout << minres << " " << maxres << endl;
    
    return 0;
}