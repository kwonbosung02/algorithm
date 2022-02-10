#include <iostream>
#include <algorithm>
#define max 8

using namespace std;

int N, M;
int arr[max] = {0,};
int print_arr[max] = {0, };
void dfs(int cnt){
    if(cnt == M){
        for(int i = 0; i < M; i++){
            cout << print_arr[i] << ' ';
        }
        cout << '\n';
        return;
    }
    for(int i = 1; i <= N; i++){
        print_arr[cnt] = arr[i];
        dfs(cnt + 1);
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