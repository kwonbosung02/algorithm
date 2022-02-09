#include <iostream>

#define Max 9

int N, M;
int arr[Max] = {0, };

using namespace std;
void dfs(int cnt){
    if(cnt == M){
        for(int i = 0; i < M; i++){
            cout << arr[i] << ' ';
        }
        cout << '\n';
        return;
    }
    for(int i = 1; i <= N; i++){
        if(arr[cnt -1] <= i){
        arr[cnt] = i;
        dfs(cnt + 1);
        }
    }
}


int main(void){
    cin.sync_with_stdio(false);
    cin.tie(0);

    cin >> N >> M;
    dfs(0);

}