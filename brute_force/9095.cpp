#include <iostream>
using namespace std;
 int main(void){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int iter;
    cin >> iter;
    for(int i = 0; i < iter; i++){
    int n;
    cin >> n;
    int arr[12];
    arr[0] = 0;
    arr[1] = 1;
    arr[2] = 2;
    arr[3] = 4;
    
    if(n == 0 || n == 1 || n == 2 || n == 3){
        cout << arr[n] << endl;

    }
    else{
        for(int i = 4; i <=n; i++){
            arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3];
        }
        cout << arr[n] << endl;
    }
    
    }
    return 0;
 }