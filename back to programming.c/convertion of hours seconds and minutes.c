#include<stdio.h>
/*int main(){
    int minutes,hours,seconds,minutesremaining;
    printf("Enter the total minutes:- ");
    scanf("%d",&minutes);
    hours=minutes/3600;
    minutesremaining=(minutes%3600) / 60;
    seconds=(minutes%3600) % 60;
    printf("The required time is %d hrs: %d mins: %d secs",hours,minutesremaining,seconds);
    return 0;
}*/
int main(){
    int p;
    printf("Enter the number");
    scanf("%d",&p);
    while(i<p){
        if (p%i==0){
            printf("Not prime");
        }
        i++;
    }
    return 0;
}