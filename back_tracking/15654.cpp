#include <iostream>
#include <algorithm>
#define Max 9

using namespace std;
int N,M;
int arr[Max] = {0,};
int print_arr[Max] = {0, };
bool visitied[Max] ={false,};

void dfs(int cnt){
    if(cnt == M){
        for(int i = 0; i < M; i++){
            cout << print_arr[i] << ' ';
        }
        cout << '\n';
        return;
    }
    for(int i = 1; i <= N; i++){
        if(!visitied[i]){
            print_arr[cnt] = arr[i];
            visitied[i] = true;
            dfs(cnt + 1);
            visitied[i] = false;
        }
    }
}

int main(void){
    cin.sync_with_stdio(false);
    cin.tie(0);
    
    cin >> N >> M;
    for(int i = 1; i <= N; i++)
        cin >> arr[i];
    sort(arr, arr + N + 1);
    dfs(0);
    
}