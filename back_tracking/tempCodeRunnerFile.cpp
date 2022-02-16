#include <iostream>

#define Max 11
#define CH  4

int N, M, K;
int arr[Max][Max] = {0,};
bool check[Max][Max] = {false,};
int dx[CH] = { 1, 0, -1, 0};
int dy[CH] = { 0, 1, 0, -1};

int ans = 1e-6;

using namespace std;


void dfs(int cnt, int sum){
    if(cnt == K){
        if(ans < sum) ans = sum;
        return;
    }

    for(int i = 1; i <= N; i++){ //y
        for(int j = 1; j <= M; j++){ //x
            if(!check[i][j]){
                bool flag = true;
                for(int z = 0; z < CH; z++){
                    int x = j + dx[z];
                    int y = i + dy[z];
                    if(x >= 1 && y >= 1 && x<=M && y<=N){
                        if(check[y][x]) flag = false;
                        
                    }
                }
                if(flag == true){
                    check[i][j] = true;
                    int add = arr[i][j];
                    dfs(cnt + 1, sum + add);
                    check[i][j] = false;
                }
            }
        }
    }
}


int main(void){
    cin.sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> N >> M >> K;
    for(int i = 1; i <= N; i++)
        for(int j = 1; j <= M; j++)
            cin >> arr[i][j];
    dfs(0, 0);
    cout << ans;
    return 0;
}


