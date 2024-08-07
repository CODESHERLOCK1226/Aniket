#include<stdio.h>
#include<stdbool.h>
void swap(int *x, int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void bubblesort(int arr[], int n){
    int i,j;
    bool count;
    for(i=0;i<n-1;i++){
        count=false;
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
                count=true;
            }
        }
        if(count==false)
            break;
        
    }
}
void printarray(int arr[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d \n", arr[i]);
    }
}
int main(){
    int a;
    printf("Enter the length of the array: ");
    scanf("%d",&a);
    int arr[a];
    printf("Enter the values of the array: \n");
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    bubblesort(arr,a);
    printf("The array after sorting is: \n");
    printarray(arr, a);
    return 0;
}
int main(){
    int n;
    printf("Enter the value of number of rows: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n-1; i++){
        
    }
    
}
