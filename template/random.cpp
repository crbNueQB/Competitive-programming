#include <bits/stdc++.h>
using namespace std;

#define WIN true
#define LOSE false
#define COST 0.6
#define SPREAD 0.2
#define PROFIT 1.0
#define DEPROFIT 1.0

list<int> monte;

int return_random(){
    int s;
    bool w;
    srand(time(NULL));
    s = rand() % 1000 + 1;
    if(s <= 505) w = WIN;
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
        auto itr = monte.begin();
            monte.erase(itr);
            if(!monte.empty()){            
                auto itrr = monte.end();
                monte.erase(itrr);
            }
    }else{
            monte.push_back(monte.front() + monte.back());
    }
}

int main() {
    //cin >> ;
    init_monte();
    int Lots = 0;
    double pf = 0;
    for (int i = 1; i <= 1000; ++i){
        if(monte.empty()) init_monte();
        Lots = monte.front() + monte.back();
        if(return_random()){
            pf += (PROFIT - COST - SPREAD) * Lots;
        }else{
            pf -= (DEPROFIT + COST + SPREAD) * Lots;
        }
        /*
        if(!monte.empty()){
            for (auto lst = monte.begin(); lst != monte.end(); ++lst){
                cout << *lst << " ";
            }
            cout << endl;
        }*/
    }
    cout << "pf" << pf << endl;
    return 0;
}