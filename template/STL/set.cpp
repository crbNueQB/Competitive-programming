#include <bits/stdc++.h>
using namespace std;

int main() {
    //set 要素が全てソートされて格納される。
    set<int> st; //int型でsetコンテナを初期化
    set<int> st{3, 1, 4, 1} //初期化 重複データは自動的に削除され、{1, 3, 4}が格納される。

    st.insert(1); //setに1を追加

    auto c = st.erase(1) //erase(値)でsetから値を削除する。リターン値として、削除したデータの個数を返す(0 か 1)

    //find()で要素が見つかれば、要素へのイテレータが得られる。
    auto c = st.find(1) //要素がある場合にはcにその要素を示すイテレータが入る。要素がない場合はend()が得られる。 
    if(c == st.end()){ 
        //要素が見つからなかった
    }else{
        //要素が見つかった
    }

    //イテレータはset<型>::iteratorだが、タイプが大変なのでautoを使用する
    auto itr = st.begin(); //最初の要素のイテレータを取得する
    cout << *itr; //イテレータの出力

    //for文で全ての要素にアクセス(exp.全て表示する)
    for (auto itr = st.begin(); itr != st.end(); ++itr){
        cout << *itr;
    }

    //別方法 for文で全ての要素にアクセス(exp.全て表示する)
    for (auto x : st){
        cout << x;
    }

    return 0;
}