#include <bits/stdc++.h>
#include <random>
using namespace std;

#define WIN true
#define LOSE false
#define COST 0
#define SPREAD 1.2
#define PROFIT 4.2
#define DEPROFIT 2.0
#define bLot 0.01
#define tpf 4.75

list<int> monte;

int return_random(){
    int s;
    bool w;
    std::random_device rnd;     // 非決定的な乱数生成器を生成
    std::mt19937 mt(rnd());     //  メルセンヌ・ツイスタの32ビット版、引数は初期シード値
    std::uniform_int_distribution<> rand100(1, 1000);        // [0, 999] 範囲の一様乱数

    s = rand100(mt);
    
    if(s <= 505) w = WIN;
    else w = LOSE;
    return w;
}

int main(){
    double init = 0.05;
    int shisan = 100000;
    for(int i = 0; i < 100000; i++){
        int k = return_random();
        if(k == WIN){
            init++;
            shisan += 49.3;
        }else if(k == LOSE){
            init--;
            shisan -= 50.7;
            if(init <= 0) init = 0.01;
        }
        if(shisan <= 0) break;
    }
    cout << shisan << endl;
    return 0;
}