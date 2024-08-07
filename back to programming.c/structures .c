#include<stdio.h>
int main(){
    struct Books
    {
        char name;
        float price;
        int pages;
    };
    struct Books b1,b2,b3;
    printf("Enter names,prices & number of pages of 3 books\n");
    scanf("%c %f %d",&b1.name,&b1.price,&b1.pages);
    printf("Enter names,prices & number of pages of 3 books\n");
    scanf("%c %f %d",&b2.name,&b2.price,&b2.pages);
    printf("Enter names,prices & number of pages of 3 books\n");
    scanf("%c %f %d",&b3.name,&b3.price,&b3.pages);
    printf("What u have printed:\n");
    printf("%c %f %d",b1.name,b1.price,b1.pages);
    printf("%c %f %d",b2.name,b2.price,b2.pages);
    printf("%c %f %d",b3.name,b3.price,b3.pages);
    return 0;
}