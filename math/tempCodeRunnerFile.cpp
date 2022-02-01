#include <stdio.h>
int main(void){
    long long result = 0;
    int key;
    int input;
    scanf("%d", &key);
    for(int i = 0; i < key; i++){
        scanf("%d", &input);
        
        for(int i = 1; i <= input; i++){
        result += (input / i) * i;
        }

        printf("%lld\n", result);
        result = 0;
    }
    

    
    return 0;
}