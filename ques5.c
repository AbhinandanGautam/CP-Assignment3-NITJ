#include<stdio.h>

int fact(int n){
    if(n==0 || n==1){
        return 1;
    }

    return n*fact(n-1);
}

int isStrong(int num){
    int n = num;
    int sum=0;
    while(n){
        int digit = n%10;
        sum += fact(digit);
        n = n/10;
    }
    if(sum==num){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    printf("Strong Numbers between 1 and %d : ",n);
    for(int i=1; i<=n; i++){
        if(isStrong(i)){
            printf("%d ",i);
        }
    }
    printf("\n");
    return 0;
}