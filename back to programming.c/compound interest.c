#include<stdio.h>
#include<math.h>
int main(){
    double p,r,t,var,final_amount;
    printf("Enter the principle amount, interest rate, time: ");
    scanf("%lf %lf %lf",&p,&r,&t);
    var=pow((1+(r/100)),(t));
    final_amount=p*var;
    printf("THE FIANL AMOUNT IS: %lf",final_amount);
    return 0;
}