#include <iostream>
#include <algorithm>

using namespace std;

int num;
int ans = 1;
int ct;
char arr[50][50];
void check();
int main(void){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> num;
    
    for(int i = 0; i < num; i++){
        for(int j = 0; j < num; j++){
            cin >> arr[i][j];
        }
    }
    check();
    //printf("%d\n", ans);

    //change row
    for(int i = 0; i < num; i++){
        for(int j = 0; j < num - 1; j++){
            swap(arr[i][j], arr[i][j+1]);
            /* 
            for(int i = 0; i < num; i++){
                for(int j = 0; j < num; j++){
                    printf("%c", arr[i][j]);
                }
                printf("\n");
            }

            printf("\n");
            */
            check();
            //printf("%d\n", ans);
            
            swap(arr[i][j], arr[i][j+1]);
        }
    }
    //change column
    for(int i = 0; i < num; i++){
        for(int j = 0; j < num - 1; j++){
            swap(arr[j][i], arr[j+1][i]);
            check();
            swap(arr[j][i], arr[j+1][i]);
        }
    }
    printf("%d", ans);



    return 0;
}

void check(){
    char tmp;
    ct = 1;
    //row
    for(int i = 0; i < num; i++){
        tmp = arr[i][0] ;
        for(int j = 1; j < num; j++){
            if(arr[i][j] == tmp) ct ++;
            else {
                ct = 1;
                tmp = arr[i][j];
            }
            if(ans < ct) ans = ct;
        }
        
        ct = 1;
    }
    //column
    for(int i = 0; i < num; i++){
        tmp = arr[0][i];
        for(int j = 1; j < num; j++){
            if(arr[j][i] == tmp) ct ++;
            else{
                 ct = 1;
                 tmp = arr[j][i];
            }
            if( ans < ct) ans = ct;
        }
        
        ct = 1;
    }

}


