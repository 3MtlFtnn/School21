#include <stdio.h>

int function(int a){
    
}

int main(){
    int a = 0;
    if(scanf("%d", &a)!=1){
        printf("n/a");
        return 1;
    }

    int res = function(a);
    printf("%d", res);
}