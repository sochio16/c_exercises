#include<stdio.h>

int main(){
    
    float base;
    float height;
    float area;
    
    printf("Enter base of the triangle : ");
    scanf("%f",&base);
    printf("Enter height of the triangle : ");
    scanf("%f",&height);
    
    area =(height * base) / 2;
    
    printf("Area of the triangle =%.0f sp. unit",area);
    
    
    return 0;
}
