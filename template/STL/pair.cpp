#include <bits/stdc++.h>
using namespace std;

//pair 2つの要素のペアを入れるものになる。

int main() {
    pair<string, int> p; //string型/int型でpairを初期化

    p.first = "初期化"; //firstでメンバ変数にアクセス
    p.second = 1; //secondでメンバ変数にアクセス

    //vectorの要素がpariの場合
    vector<pair<string, int>> v; //vectorをpairで初期化
    v.push_back({"apple", 4});  //vectorの末尾にapple,4のキーを入れる
    v.push_back({"banana", 3});  //vectorの末尾にapple,4のキーを入れる

    //ソートの挙動
    //-一つ目を昇順にソートする。
    //-一つ目が同一の場合はさらに二つ目を昇順にソートする。
    //降順にしたい場合
    //マイナスを全てにかけておく
    //一つ目を昇順、二つ目を降順にしたい場合は,二つ目だけにマイナスを掛ける。
    sort(v.begin(), v.end());   //ソートする。

    return 0;
}