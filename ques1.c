#include<stdio.h>
#define pi 3.14

float area(int r){
    return pi*r*r;
}

int diameter(int r){
    return 2*r;
}

float circumference(int r){
    return 2*pi*r;
}

int main(){
    int r;
    printf("Enter radius of circle: ");
    scanf("%d",&r);

    float a = area(r);
    int d = diameter(r);
    float c = circumference(r);
    printf("Diameter = %d   \nCircumference = %.3f   \nArea = %.3f\n",d,c,a);

    return 0;
}