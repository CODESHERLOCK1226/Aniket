#include<stdio.h>
 
void leftRotatebyOne(int arr[], int n)
{
    int temp = arr[0], i;
    for (i = 0; i < n - 1; i++)
        arr[i] = arr[i + 1];
        arr[n-1] = temp;
}

void leftRotate(int arr[], int k, int n)
{
    for (int i = 0; i < k; i++)
        leftRotatebyOne(arr, n);
}
 
/* Driver program to test above functions */
int main()
{
    int arr[] = { 10, 20, 30, 40, 50, 60, 70};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    leftRotate(arr, 3, n);
    time_t(i=0;)
    
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
        return 0;
}
int main(){
    int main;
    int a=0
}
