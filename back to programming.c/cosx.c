#include<stdio.h>
#include<math.h>
double factorial(double x){
    if(x <=0){
        return 1;
    }
    else{
        return x*factorial(x-1);

    }
}

int main(){
    float a,b,c;
    printf("Enter the number: ");
    scanf("%d%d%d",&a,&b,&c)
}