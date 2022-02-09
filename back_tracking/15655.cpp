#include <iostream>
#include <algorithm>

#define Max 9

int N, M;
int arr[Max] = {0,};
int print_arr[Max] = {0,};
bool visited[Max] = {0,};

using namespace std;

void dfs(int cnt){
    if(cnt == M){
        for(int i = 0; i < M; i++){
            cout << print_arr[i] << ' ';
        }
        cout << '\n';
        return;
    }
    for(int i = 1; i <= N; i++){
        if(!visited[i] && print_arr[cnt - 1] < arr[i]){
            visited[i] = true;
            print_arr[cnt] = arr[i];
            dfs(cnt + 1);
            visited[i] = false
        }
    }
}

int main(void){
    cin >> N >> M;
    for(int i = 1; i <= N; i++)
        cin >> arr[i];
    sort(arr, arr + N + 1);
    dfs(0);
}