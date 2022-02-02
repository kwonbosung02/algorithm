#include <stdio.h>

int main(void){
    int nl, nr;
    int arr[1000001];
    for(int i = 1; i <= 1000000; i++){
        arr[i] = i;
    }
    for(int i = 2; i <= 1000000; i++){
        if(arr[i] == 0) continue;
        for(int j = i + i; j <= 1000000; j += i){
            arr[j] = 0;
        }
    }


    scanf("%d %d", &nl, &nr);
    for(int i = 0; i < nr - nl + 1; i++){

        if(arr[i+nl] != 0 && arr[i+nl] != 1){
            printf("%d\n", arr[nl + i]);
        }
    }
    return 0;
}