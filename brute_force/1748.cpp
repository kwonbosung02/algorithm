#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    string n;
    cin >> n;
    int sz = int(n.size());

    if(sz == 1){
        cout << n << endl;
    }
    else{
        long ans = 0;
        //1~9 : 9
        //10 ~ 15 : 12
        
        //100 ~ 120 : 21 * 3 = 63
        //10  ~ 99  : 90 * 2 = 180
        //1 ~ 9 : 9
        for(int i = 1; i < sz; i++){
            ans += i * (9 * pow(10, i - 1));
        } 

        ans += sz * (stoi(n) - pow(10, sz- 1) +1);

        cout << ans << endl;
    }

    

    return 0;
}