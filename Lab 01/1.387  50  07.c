//Codeforce problem no: 4A
// Problem name: watermelon
#include<stdio.h>

int main(){

    int n;
    scanf("%d", &n);
    if(n <= 2 || n%2 != 0){
        printf("NO\n");
    }
    else{
        printf("YES\n");
    }

    return 0;
}
