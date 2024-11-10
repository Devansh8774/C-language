// pointer to pointer 
// A variable that stores the memory address of another pointer

#include<stdio.h>
int main(){
    int i=5;
    int *ptr = &i;
    int **pptr =&ptr;

    printf("%d\n",**pptr);
}

// pointers in function call 
// 1. Call by value (we pass value of variable as arguement)
// 2. call by reference (we pass address of variable as arguement)

#include<stdio.h>
void square (int n);

int main (){
    int number =4;
    square(number);
    printf("number is : =%d\n",number);
    return 0;

}
// call by value
void square(int n){
    n=n*n;
    printf("square =  %d\n",n);
}
void squuare(int* n){
    *n=(*n)*(*n);
    printf("square = %d \n",*n);
}

// Q swap 2 numbers a & b.(interchange)  call by value
#include<stdio.h>
void swap (int a, int b);

int main (){
    int x=3,y=5;
    swap(x,y);
    printf("x =%d &y=%d \n",x,y);
    return 0;

}
// call by value
void swap(int a, int b){
    int t = a;
    a =b;
    b =a;
    printf("a =%d & b = %d \n",a,b);
}

// call by reference 
#include<stdio.h>
void swap (int a, int b);
void _swap(int*a,int*b);

int main (){
    int x=3,y=5;
    _swap(&x,&y);
    printf("x =%d &y=%d \n",x,y);

    return 0;

}
// call by reference.
void _swap(int *a, int *b){
    int t = *a;
    *a =*b;
    *b =t;
    //printf("a =%d & b = %d \n",a,b);
}

// print address and value by  using call by refrence and call by value.
#include<stdio.h>
void printAddress(int *n);

int main(){
    int n=4;
    printAddress(n);
    printf("address of n is: %u\n",&n);
    return 0;
}

void printadress(int *n){
    printf("addrress of n is : %u\n",n);


}
////////
#include<stdio.h>
void dowork (int a, int b,int*sum,int*prod,int*avg);
    int main () {
        int a=3,b=5;
        int sum,prod,avg;
        dowork(a,b,&sum,&prod,&avg);
        printf("sum =%d,avg = %d,prod =%d\n",sum,prod,avg);
        return 0;
}
    void dowork (int a, int b, int*sum,int*prod,int *avg){
        *sum = a+b;
        *prod = a*b;
        *avg = (a+b)/2;
}

