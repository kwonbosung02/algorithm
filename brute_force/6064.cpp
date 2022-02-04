#include <iostream>

using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(0);
    // 1 <= M, N <= 40,000
    int num;
    cin >> num;
    for(int i = 0;  i < num; i++){


    int M, N, x, y;
    int x_t = 1;
    int y_t = 1;
    int ct = 1;
    bool ch = false;
    cin >> M >> N >> x >> y;
    while( x_t < M || y_t < N){
        if(x_t < M){
            x_t++;
        }
        else{
            x_t = 1;
        }

        if(y_t < N){
            y_t++;
        }
        else{
            y_t = 1;
        }
        ct++;

        if(x_t == x && y_t == y){
            ch = true;
            cout << ct << endl;
        }
        
    }
    if(ch == false){
        cout << -1 << endl;
    }
    
    }
    return 0;
}