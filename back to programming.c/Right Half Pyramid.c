#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("\n");
        for(int j=0; j<i+1;j++){
            printf("* ");
        }
    }
}