//標準関数をすべてインクルードする。
#include <bits/stdc++.h>
#include <vector>
#define rep(i, n) for(int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main() {
    int N; cin >> N;
    vector<int> v(N);
    for (int i = 0; i < N; ++i) v.at(i) = i;

    vector<int> x(N,0);
    vector<int> y(N,0);

    for (int i = 0; i < N; ++i){
        cin >> x.at(i) >> y.at(i);
    }
    int count = 0;
    long double sum = 0;
    do{
        ++count;
        for (int i = 0; i < N-1; ++i){
            int a = v[i];
            int b = v[i+1];

            long double dx = x[a] - x[b];
            long double dy = y[a] - y[b];

            sum += sqrt(dx * dx + dy * dy);
        }
    } while(next_permutation(v.begin(), v.end()));
    
    cout << fixed << setprecision(10) <<sum/count << endl;
    return 0;
}