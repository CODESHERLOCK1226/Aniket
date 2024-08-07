#include<stdio.h>
#include<math.h>
int factorial(int x){
    if(x<=1){
        return 1;
    }
    else{
        return x*factorial(x-1);
    }
}
int main(){
    float x,n,s,t,p,i,sum=0;
    printf("Enter the angle:- ");
    scanf("%f",&x);
    for(i=1; i<6; i++){
        p=2*i;
        s=pow(x,p);
        t= factorial(p);
        n=pow((-1),i);
        sum=sum+n*(s/t);
    }
    printf("%d",sum);
    return 0;

}