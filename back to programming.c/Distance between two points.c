#include<stdio.h>
#include<math.h>
int main(){
    float x1,y1,x2,y2,dis,d;
    printf("Enter the x and y co-ordinate of the first location: ");
    scanf("%f %f",&x1,&y1);
    printf("Enter the x and y co-ordinate of the second location: ");
    scanf("%f %f",&x2,&y2);
    dis=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    printf("The distance between two points is:  %f",dis);
    return 0;
}
