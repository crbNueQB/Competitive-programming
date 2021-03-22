//標準関数をすべてインクルードする。
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> D(3, -1);
    vector<bool> F(3, false);
    for (int i = 0; i < M; ++i){
        int s, c;
        cin >> s >> c;
        --s;
        if(D[s] == -1 || D[s] == c) {
            D[s] = c;
            F[s] = true;
        }
    }
    if(F[0] == true && F[2] == true && F[1] == false) {
        F[1] = true;
        D[1] = 0;
    }
    string s;
    for (int i = 0; i < N; ++i){
        //cout << D[i] << endl;
        if(D[i] != -1) s += to_string(D[i]);
        else s = "-1";
    }

    cout << s << endl;
    return 0;
}