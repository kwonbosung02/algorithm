#include <stdio.h>
int main(void){
    long long arr[1000001];
    long long res[1000001];
    res[1] = 1;
    for(int i = 1; i <= 1000000; i++){
        arr[i] = 1;
    }
    
    for(int i = 2; i <= 1000000; i ++ ){
        for(int j = 1; i * j <= 1000000; j++){
            arr[i*j] += i;
        }
        res[i] = arr[i] + res[i - 1];
    }
    //printf("%lld", res[10]);
    int num, key;
    scanf("%d", &num);
    for(int i = 0; i < num; i++){
        scanf("%d", &key);
        printf("%lld\n", res[key]);
    }
    return 0;
}