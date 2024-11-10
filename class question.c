// Q1  print 1 ----- 50  (a) should be divisible by 5,7 and 6 
/*# include <stdio.h>
# include  <math.h>
int main (){
    int i=1;
    for(i=1; i< 50;i++)
    if (i%5==0 && i%7==0 || i%6==0){
    printf("%d",i);
}

}*/
/*# include <stdio.h>
# include <math.h>
 int main(){
    int a=5;
    int b= a>4;
    int c=a>4;
    int d=b+c;
    printf("%d",a);
    printf ("%d",b);
    printf("%d",c);
    printf("%d",d);
    return 0;


 }*/

/*# include <stdio.h>
# include <math.h>
int add (int a,int b){
    return a+b;
}

int main (){
    int c=add (4,5);
    printf("%d",c);

}*/

/*# include <stdio.h>
# include <math.h>
int main (){
    int marks(a){
    int a = 70;
    }
    if(a>60) {
        printf("first division");
    }
    if (a>50 && a<60){
        print ("second division");
    }
    if (a<33){
        printf("fail");
        return 0;
    }
}*/


/*int add (int a, int b){
    return 0;
}
int main (){
    int c= add(4,5);
    printf("%d",c);
    int d =(12,7);
    printf ("%d",d);
}*/
int add(int a, int b){
   return a+b;

}

int main (){
    int c=add (4,11);
    int d= add (10,10);
    int f =(c+d)*100;
    printf ("%d",f);
}

// Q1. double a= 5.76432 ( print a upto decimal place 2)
# include <stdio.h>
int main (){
    double a= 5.76432 ;
        printf("%.2f \n" , a);
        return 0;
    }
 // Q2. cheq whether number is even or odd 

# include<stdio.h>

int main () {
     int n;
    printf("enter an integer number\n");
    scanf("%d", &n);
    (n%2==0) ?
    (printf("%d is even number\n",n)):
    (printf("%d is odd number\n",n));

    return 0;
}

# include <stdio.h>
int main (){
    int number;
    printf("enter number :");
    scanf("%d",number);

    if(number>= 0){
        printf("positive \n");
          if (number %2==0){
            printf("even \n");
        }
        if (number/7&& number/9==0){
            printf("divisible by 7 and 9");
        }
          else{
            printf("odd \n");
        }
    
    } else {
        printf("negative \n ");
    }
      
}

// print first and last element of character.
# include <stdio.h>
int main(){
    char a[4]={'x','y','z'};
    printf("%c\n",a[0]);
    printf("%c\n",a[2]);
    
 
}

// print second value of integer stored in b.
# include <stdio.h>
int main (){
    int b[3]={10,20,30};
    printf("%d \n",b[1]);
}

// print those number who is divisible by 2 and 5.
# include<stdio.h>
int main(){
    int c[5]={10,40,15,22,15};
    int i=0;
    for(i=0;i<5;i++){
        if(c[i]%2==0 && c[i]%5==0){
        printf("%d\n",c[i]);
          
        }

        
}
}

 
    
// create an array and print even and odd number .
# include <stdio.h>
int main (){
    int a[5];
    int i=0;
    for (i=0;i<5;i++){
    a[i]=2*i;
}
    printf("%d ",a[3]);
        
}

// change x to 100 using call by reference function.

# include<stdio.h>
void main(){
    int x=10;
    int *p=x;
    *p=100;
    printf("%d",x);
    return 0;
}

#include<stdio.h>
int fib( int n);
int main (){
    printf("%d",fib(6));
    return 0;

}
int fib (int n){
    if(n==0){
        return 0;
    } 
    if(n==1){
        return 1;
    }


 int fibnm1=fib(n-1);
 int fibnm2=fib(n-2);
 int fibn=fibnm1+fibnm2;
printf("%d",n,fibn);
return fibn;

}

// nested structure
#include<stdio.h>
struct class {
    int id ;
    float f ;

};
struct student{
    int rollno ;
    float marks;
    struct class c1;

};
int main(){
    struct student s1={1,4.5,7,7.5};
   printf("%d\n",s1.rollno);
   printf("%d\n",s1.c1.id);

} 

