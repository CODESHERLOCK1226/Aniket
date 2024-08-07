// C program to print the full pyramid pattern of stars 
#include <stdio.h> 
  
int main() 
{ 
    int rows; 
    printf("Enter the number of rows:");
    scanf("%d",&rows);
  
    // first loop to print all rows 
    for (int i = 0; i < rows; i++) { 
  
        // inner loop 1 to print white spaces 
        for (int j = 0; j < 2 * (rows - i) - 1; j++) { 
            printf(" "); 
        } 

        int fact(){
            for (int k = 0; k < 2 * (i + 1); k++) { 
            printf("* "); 
             printf("\n"); 
        } 
        printf("\n"); 
    } 

        } 
        for (int m = 0; m < 2 * (i + 1); m++) { 
            printf("* "); 
        } 
        printf("\n"); 
    } 
    int main(){
        
    }
}

