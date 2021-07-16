#include<stdio.h>

int power(int b,int p){
    if(p==0){
        return 1;
    }
    return b*power(b,p-1);
}

int bin(int n){
    if(n==0)
        return 0;
    else
        return n%2 + 10*bin(n/2);
}

int reverse(int num){
    static int rev_num = 0;
    static int base_pos = 1;
    if (num > 0) {
        reverse(num / 10);
        rev_num += (num % 10) * base_pos;
        base_pos *= 10;
    }
    return rev_num;
}

int main(){
    for(;;){
    printf("1. Find the pth power of a number n using recursive function\n");
    printf("2. Find the binary equivalent of a number n and count all 1’s using recursive function.\n");
    printf("3. Find the reverse of the number using recursive function.\n");
    printf("4.EXIT\n\n");
    int n;
    printf("Enter choice: ");
    scanf("%d",&n);

    if(n==1){
        int b,p;
        printf("Enter base: ");
        scanf("%d",&b);
        printf("Enter power: ");
        scanf("%d",&p);
        int res = power(b,p);
        printf("%d\n",res);
    }else if(n==2){
        int n;
        printf("Enter a number: ");
        scanf("%d",&n);
        int res = bin(n);
        printf("%d\n",res);
    }else if(n==3){
        int n;
        printf("Enter a number: ");
        scanf("%d",&n);
        int res = reverse(n);
        printf("%d\n",res);
    }else if(n==4){
        break;
    }else{
        printf("\n!!!Enter a correct choice!!!\n");
    }
    }
    return 0;
}