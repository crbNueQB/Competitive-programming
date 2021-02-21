//標準関数をすべてインクルードする。
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
    int N, M; cin >> N >> M;

    bool graph[N][M];
    for (int i = 0; i < M; ++i){
        int a, b;
        cin >> a >> b; --a; --b;
        graph[a][b] = graph[b][a] = true;
    }
    vector<int> v(N,0);
    for (int i = 0; i < N; ++i) v.at(i) = i;

    int count = 0;
    do{
        if(v[0] != 0) break;
        bool res = true;
        for (int i = 0; i + 1 < N; ++i){

            if(graph[v[i]][v[i+1]] != true){
                res = false; break;
            }
        }
        if(res) count++;
    } while(next_permutation(v.begin(), v.end()));
    
    cout << count << endl;
    return 0;
}