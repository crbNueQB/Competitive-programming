#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;

    vector<vector<int>> A(H, vector<int>(W));
    vector<vector<int>> B(H, vector<int>(W));
    vector<int> sumH(H, 0);
    vector<int> sumW(W, 0);
    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            cin >> A.at(i).at(j);
            sumH.at(i) += A.at(i).at(j);
        }
    }
    for(int j = 0; j < W; j++){
        for(int i = 0; i < H; i++){
            sumW.at(j) += A.at(i).at(j);
        }
    }

    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            B.at(i).at(j) = sumH.at(i) + sumW.at(j) - A.at(i).at(j);
            cout << B.at(i).at(j) << " ";
        }
        cout << endl;
    }

    //cout << << endl;

    return 0;
}