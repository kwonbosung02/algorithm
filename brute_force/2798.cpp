#include <stdio.h>
#include <stdlib.h>

int main(void){
    int num, key;
    scanf("%d %d", &num, &key);

    int arr[num];
    for(int i = 0; i < num; i ++){
        scanf("%d", &arr[i]);
    }
    int max = 1000000;
    int c = 0;
    int tmp;
    for(int i = 0; i < num - 2; i++){
        for(int j = i + 1; j < num - 1; j++){
            for(int k = j + 1; k < num; k++){
                tmp = arr[i] + arr[j] + arr[k];
                if( key - tmp< max && key - tmp >= 0){
                    c = tmp;
                    max = key - tmp;
                }
                
            }
        }
    }
    printf("%d\n", c);
    return 0;
}