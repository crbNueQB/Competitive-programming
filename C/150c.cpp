//標準関数をすべてインクルードする。
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
    int N; cin >> N;
    vector<int> v;
    vector<int> P(N);
    vector<int> Q(N);

    for (int i = 1; i <= N; ++i) v.push_back(i);

    for (int i = 0; i < N; ++i) cin >> P.at(i);
    for (int i = 0; i < N; ++i) cin >> Q.at(i);

    int count = 0;
    int cP = 0;
    int cQ = 0;
    do{
        count++;
        bool tP = true;
        bool tQ = true;
        for(int i = 0; i < N; i++){
            if(v[i] != P[i]) tP = false;
            if(v[i] != Q[i]) tQ = false;
        }
        if(tP) cP = count;
        if(tQ) cQ = count;
    } while(next_permutation(v.begin(), v.end()));
    
    cout << abs(cP - cQ) << endl;
    return 0;
}