#include <stdio.h>
int main(void){
    long long result = 0;
    int input;

    scanf("%d", &input);

    for(int i = 1; i <= input; i++){
        result += (input / i) * i;
    }
    printf("%lld\n", result);
    return 0;
}