#include <bits/stdc++.h>
#include <random>
using namespace std;

#define WIN true
#define LOSE false
#define COST 0
#define SPREAD 1.2
#define PROFIT 4.2
#define DEPROFIT 2.0
#define bLot 0.02
#define tpf 4.75

list<int> monte;

int return_random(){
    int s;
    bool w;
    std::random_device rnd;     // 非決定的な乱数生成器を生成
    std::mt19937 mt(rnd());     //  メルセンヌ・ツイスタの32ビット版、引数は初期シード値
    std::uniform_int_distribution<> rand100(1, 1000);        // [1, 1000] 範囲の一様乱数

    s = rand100(mt);
    
    if(s <= 483) w = WIN;
    else w = LOSE;
    return w;
}

void init_monte(){
    monte.clear();
    monte.push_front(0);
    monte.push_back(1);
}

void calc_monte(bool w){
    if(w){
        monte.pop_front();
        if(!monte.empty()){            
            monte.pop_back();
        }
    }else{
            monte.push_back(monte.front() + monte.back());
    }
}

int main() {
    //cin >> ;
    init_monte();
    int Lots = 0;
    int mlot = 0;
    int losscut = 0;
    double sumpf = 0;
    double pf = 10000;
    double mpf = pf;
    double bonus = 0;
    int make = 0;
    int m = 0;int k = 0;
    int kati = 0;
    vector<int> f = {1, 1, 2, 2, 4, 4, 8, 8};
    int f_hairetu = 0;
    for (int i = 1; i <= 100000; ++i){
        Lots = f.at(f_hairetu);
        f_hairetu++;
        cout << "lot" << Lots << ",";
        mlot = max(Lots, mlot);
        if(return_random()){
            pf =  pf + 7000 * Lots * bLot - 700 * Lots * bLot ;
            //cout << "ppf" << 6000 * Lots * bLot - 700 * Lots * bLot << endl;
            //sumpf += Lots * bLot * tpf;
            kati++; m = 0;
            cout << "kati" << endl;
            k++;
            if(k >= 2) {
                k = 0;
                f_hairetu = 0;
            }
        }else{
            pf = pf - 5600 * Lots * bLot - 700 * Lots * bLot ;
            //cout << "mpf" << -6000 * Lots * bLot - 700 * Lots * bLot  << endl;
            //sumpf += Lots * bLot * tpf;
            cout << "make" << endl;
            make++;
            m++;
            k = 0;
        }
        if(f_hairetu >= 8) f_hairetu = 0;
        bonus += 150 * bLot * Lots;
        mpf = min(mpf, pf);
        if(pf <= 216) {
            //pf =  10000;
            //bonus = 0;
            //make++;
            break;
        }
        if(pf + bonus >= 11000) {
            //pf = 10000;
            //bonus = 0;
            //kati++;
        }
        //cout << "pf" << pf << endl;
    }
    //cout << "mlot" << mlot << endl;
    cout << "spf" << pf << endl;
    cout << "mpf" << mpf << endl;
    cout << "losscut" << losscut << endl;
    cout << "bonus" << bonus << endl;
    cout << "kati:" << kati << endl;
    cout << "make:" << make << endl;   
    return 0;
}