// 1. IF-ELSE  2. SWITCH
# include <stdio.h>
# include<math.h>

int main (){
    int age;
    printf("enter your age:");
    scanf("%d",&age);

    if (age > 18){
        printf("adult \n");
    }
    else{
        printf("not adult \n");
    }

}

// else if statements 
# include <stdio.h>
#include <math.h>
int main (){
    int age;
    printf("enter age");
    scanf("%d",&age);

    if (age >=18){
        printf("adult \n ");
    }
    else if (age >13 && age<18){
        printf("teenager \n");
    }
    else {
        printf("child ");
    }
    }

// ternary operator  
// conditio ? do something if true : do some think if false ;

# include<stdio.h>

int main (){
    int age;
    printf(" enter your age: ");
    scanf("%d ",&age);

    age >=18 ? printf("adult \n "):printf(" not adult \n");

    return 0;
}
// switch operator 
# include <stdio.h>

int main (){
    int day;
    printf(" enter  day(1-7) :");
    scanf("%d",&day);

    switch (day) {
        case 1 : printf("monday ");
                 break;
        case 2 : printf("tuesday ");
                 break;
        case 3: printf("wednesday ");
                 break;
        case 4: printf("thursday");
                 break;
        case 5: printf("friday ");
                 break ;
        case 6: printf("saturday  ");
                 break;
        case 7: printf(" sunday  ");
                 break;
        default: printf("not valid day  ");

    }
}

// nested if else statements 

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
          else{
            printf("odd \n");
        }
    
    } else {
        printf("negative \n ");
    }
      
}
 
 // Q11. will this code;
 # include <stdio.h>
 int main (){
    int x=2;

    if (x=1){
        printf("x is equal to 1");
    }else{
        printf("x is not equal to 1");
    }

 }
// Q12. write a programe to find if a character entered by user is upper case or not.
#include <stdio.h>
int main (){
    char ch;
    printf("enter character");
    scanf("%c",&ch);

    if (ch>='A' && ch<='Z'){
        printf("upper case \n");
    }
    else if (ch>='a' && ch<='z'){
        printf("lower case \n");
    }    
    else{
        printf("not english letter \n");
    }
    return 0;
    }
