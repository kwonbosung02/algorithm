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
        int ans = 0;
        cin >> M >> N >> x >> y;

        bool flag = false;
        y %= N;
        for( int i = x; i < M * N; i += M){
            if((i - 1) % N + 1 == y){
                cout << i << endl;
                flag = true;
                break;
            }
        }
        if(!flag) cout << -1 << endl;

    }
    return 0;
}