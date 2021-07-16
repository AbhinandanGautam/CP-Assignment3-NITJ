#include<stdio.h>
#include<math.h>

int Prime(int num){
    int flag=1;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num% i == 0) {
            flag = 0;
            break;
        }
    }
    if(num<= 1)
        flag = 0;
 
    if(flag == 1) {
       return 1;
    }else{
        return 0;
    }
}

int Armstrong(int num){
    int n = num;
    int sum = 0;
    while(n){
        int digit = n%10;
        sum += pow(digit,3);
        n = n/10;
    }
    if(sum==num){
        return 1;
    }else{
        return 0;
    }
}

int Prefect(int num){
    int a=1,sum=0;
    while(a<num){
        if(num%a==0){
            sum += a;
        }
        a++;
    }
    if(sum==num){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    if(Prime(n)){
        printf("%d is prime number.\n",n);
    }else{
        printf("%d is not prime number.\n",n);
    }

    if(Armstrong(n)){
        printf("%d is armstrong number.\n",n);
    }else{
        printf("%d is not armstrong number.\n",n);
    }

    if(Prefect(n)){
        printf("%d is prefect number.\n",n);
    }else{
        printf("%d is not prefect number.\n",n);
    }

    return 0;
}