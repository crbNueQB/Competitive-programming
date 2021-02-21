//標準関数をすべてインクルードする。
#include <bits/stdc++.h>
#include <vector>
#define rep(i, n) for(int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main() {
    int N; cin >> N;
    vector<int> v(N);
    iota(v.begin(), v.end(), 1); 

    vector<int> x(N);
    vector<int> y(N);

    for (int i = 0; i < N; ++i){
        cin >> x.at(i) >> y.at(i);
    }

    do{
        for (int i = 0; i < N; ++i){
            
        }
    } while(next_permutation(v.begin(), v.end()));
    
    return 0;
}