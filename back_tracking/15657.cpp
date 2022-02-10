#include <iostream>
#include <algorithm>

#define Max 9

int arr[Max] = {0,};
int visited_arr[Max] = {0,};

int N, M;

using namespace std;
void dfs(int cnt){
    if(cnt ==  M){
        for(int i = 0; i < M; i++){
            cout << visited_arr[i] << ' ';
        }
        cout << '\n';
        return;
    }
    for(int i = 1; i <= N; i++){
        if(cnt == 0 || visited_arr[cnt - 1] <= arr[i]){
            visited_arr[cnt] = arr[i];
            dfs(cnt + 1);
        }
    }
}
int main(void){
    cin.sync_with_stdio(false);
    cin.tie(0);

    cin >> N >> M;
    for(int i = 1; i <= N; i++){
        cin >> arr[i];
    }
    sort(arr, arr + N + 1);
    dfs(0);
}