#include<stdio.h>

int fun(int *arr,int size){
    int count=0;
    for(int i=0; i<size; i++){
        if(arr[i]%2==0){
            count++;
        }
    }
    return count;
}

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter n numbers: ");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    int cnt = fun(arr,n);
    printf("No. of even numbers = %d\n",cnt);

    return 0;
}