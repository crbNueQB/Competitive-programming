#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int A = 0;
    int B = 100000;
    for (int i = 0; i < N; i++){
        int a;
        cin >> a;
        A = max(a, A); 
    }
    for (int i = 0; i < N; i++){
        int b;
        cin >> b;
        B = min(b, B);
    }
    int rem = 0;
    int C = B - A;
    if(C < 0) rem = 0;
    if(C == 0) rem = 1;
    if(C >= 1) rem = C + 1;
    cout << rem << endl;
    
    return 0;
}