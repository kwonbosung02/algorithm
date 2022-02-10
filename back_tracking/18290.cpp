#include <iostream>
#define Max 11

int N, M;
int k;
int mx = -10000 * 10;

int visited[Max] = {0, };
int arr[Max][Max] = {0, };
bool arr_check[Max][Max] = {false, };

using namespace std;
void dfs(int cnt){
    if(cnt == k){
        int sum = 0; 
        for(int i = 0; i < k; i++){
            sum += visited[i];
        }
        cout << "----------";
        cout << sum << '\n';
        if(sum > mx){
            mx = sum; 
            
        }
        return;
    }
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= M; j++){
            if(!arr_check[i][j]){
                arr_check[i][j] = true;
                arr_check[i+1][j] = true;
                arr_check[i-1][j] = true;
                arr_check[i][j+1] = true;
                arr_check[i][j-1] = true;
                visited[cnt] = arr[i][j];
                cout << '[' << visited[cnt] << ']';
                dfs(cnt + 1);
                arr_check[i][j] = false;
                arr_check[i+1][j] = false;
                arr_check[i-1][j] = false;
                arr_check[i][j+1] = false;
                arr_check[i][j-1] = true;  
                
            }
        }

    }
}
int main(void){
    cin.sync_with_stdio(false);
    cin.tie(0);

    cin >> N >> M >> k;
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= M; j++){
            cin >> arr[i][j];
        }
    }
    //
    cout << '\n' << "-------------" << '\n';
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= M; j++){
            cout << arr[i][j] << ' ';
        }
        cout << endl;
        
    }   
    dfs(0);
    

}

