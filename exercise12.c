#include<stdio.h>
#include<math.h>
int main(){
    
    float principle;
    float time;
    float rate;
    double si;
    
    printf("Enter principle : ");
    scanf("%f",&principle);
    printf("Enter time : ");
    scanf("%f",&time);
    printf("Enter rate : ");
    scanf("%f",&rate);
    
    //printf("============FORMULA=============="); 
    si = ( principle * time * rate ) / 100;
    //printf("============FORMULA==============");
    
    printf("simple interest =%.6f",si);
    
    return 0;
    
}
