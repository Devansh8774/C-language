// Arrays (Collection of similar data types stored at contiguous memory locations)
// Q. Write a programme to enter price of 3 items & print their final cost with gst.
#include<stdio.h>

int main(){
    float price[3];
    printf("enter 3 price:");
    scanf("%f",&price[0]);
    scanf("%f",&price[1]);
    scanf("%f",&price[2]);

    printf("total price 1: %f",price[0]+(0.18*price[0]));
    printf("total price 2: %f",price[1]+(0.18*price[1]));
    printf("total price 3: %f",price[2]+(0.18*price[2]));
    return 0;

}

// Pointer Arithematic 
// pointer can be incremented & decremented 
# include<stdio.h>
int main(){
    int age =22;
    int*ptr=&age;
    printf("ptr = %u",ptr);
    ptr++;
    printf("ptr = %u",ptr);
    return 0;
}
