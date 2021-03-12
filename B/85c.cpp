 //標準関数をすべてインクルードする。
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
    int N, Y;
    cin >> N >> Y;

    int a = -1; int b = -1; int c = -1;
    int total = 0;

    for(int i = 0; i <= N; ++i){
        for(int j = 0; j + i <= N; ++j){
            int k = N - i - j;
            total = 10000 * i + 5000 * j + 1000 * k;
            if (total == Y && k >= 0){
                a = i;
                b = j;
                c = k;
                break;
            }
        }
    }

    cout << a << " " << b << " " << c << " " << endl;

    return 0;
}