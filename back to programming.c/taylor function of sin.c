#include<stdio.h>
#include<math.h>
double factorial(double n){
    if(n<=1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }

}
int main(){
    float x;
    double numerator,sum=0;
    printf("Enter the value of angle in radian: ");
    scanf("%f",&x);

    for(int i=0; i<=100; i++){
        numerator=((pow((-1),i)*pow(x,(2*i+1)))/factorial(2*i+1));
        sum=sum+numerator;
    }
    printf("The value of %f angle is: \n%.10f",x,sum);

}


