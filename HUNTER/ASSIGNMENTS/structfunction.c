#include<stdio.h>
 
struct data {
    int sum, product;
};
 
typedef struct data myStruct;
 
myStruct getSumAndProduct(int a, int b){
    myStruct s;
    s.sum = a + b;
    s.product = a * b;
    return s;
}
 
int main()
{
    int a, b;
    myStruct result;
     
    printf("Enter two integers\n");
    scanf("%d %d", &a, &b);
     
    result = getSumAndProduct(a, b);
     
    printf("Sum = %d\nProduct = %d", result.sum, result.product);
  
    return 0;
}

