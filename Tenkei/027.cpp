#include <bits/stdc++.h>
using namespace std;

int main() {
    set<string> st;
    int N;
    cin >> N;
    vector<int> result(N+1, 0);
    for(int i = 1; i <= N; i++){
        int a = st.size();
        string s;
        cin >> s;
        st.insert(s);
        if(a + 1 == st.size()) result.at(i) = i;
    }
    for(int i = 1; i <= N; i++){
        if(result.at(i) != 0) cout << result.at(i) << endl; 
    }
    //cout << << endl;

    return 0;
}