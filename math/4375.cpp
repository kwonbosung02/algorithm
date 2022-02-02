#include <iostream>
 
using namespace std;
 
int main() {
    int n;
    while(scanf("%d", &n) != EOF) {
        int chk = 1;
        int ans = 1;
        while (true) {
            if (chk % n == 0) {
                printf("%d\n", ans);
                break;
            }
            else {
                chk = (chk*10)%n + 1;
                ans += 1;
            }
        }
    }
}

