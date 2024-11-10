# include <stdio.h>
struct student {
    int roll_no;
    char name[10];
    float marks;
};
int main (){
    struct student s1;
    s1.roll_no =4;
    s1.marks = 7.5;
    strcpy(s1.name,"AZY");
    printf("%d",s1.roll_no);

}
