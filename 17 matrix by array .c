#include<stdio.h>
#include<conio.h> 
void main(){
    int r,c,i,j,k,arr1[3][3],arr2[3][3],mul[3][3];
    printf("enter the row");
    scanf("%d",&r);
    printf("enter the column no");
    scanf("%d",&c);
    printf("enter the first matrix");
    for(i=0;i<=3;i++){
        for(j=0;j<=3;j++){
            scanf("%d",&arr1[i][j]);
        }
        printf("enter the second matix");
        for(i=0;i<=3;i++){
            for(j=0;j<=3;j++){
                scanf("%d",&arr2[i][j]);
            }

        }
        printf("multiplication");
        for(i=0;i<3;i++){
            for(j=0;j<=3;j++){
                for(k=0;k<=3;k++)
                {
                  mul[j][i]+=arr1[i][k]*arr2[k][j];
                }
            }
        }
                        for(i=0;i<=r;i++){
                            for(j=0;j<=c;j++){
                                printf("%d",mul[i][j]);
                            }
                   }  
        }
   
    getch();

}
// Second question 


#include <stdio.h>

int main() {
    int row1, col1, row2, col2;

    // Input dimensions of the first matrix
    printf("Enter the number of rows and columns for matrix 1: ");
    scanf("%d %d", &row1, &col1);

    // Input elements of the first matrix
    int matrix1[row1][col1];
    printf("Enter the elements of matrix 1:\n");
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input dimensions of the second matrix
    printf("Enter the number of rows and columns for matrix 2: ");
    scanf("%d %d", &row2, &col2);

    // Input elements of the second matrix
    int matrix2[row2][col2];
    printf("Enter the elements of matrix 2:\n");
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < col2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Check if matrices can be multiplied
    if (col1 != row2) {
        printf("Matrices cannot be multiplied!\n");
        return 0;
    }

    // Multiply matrices
    int result[row1][col2];
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < col1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Display the result matrix
    printf("Resultant matrix:\n");
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

return 0;
}

// Third question 

#include<stdio.h>
int main (){
    int arr[30],i,ele,num;
    printf("enter the number");
    scanf("%d",&num);
    for(i=0;i<=num;i++){
        scanf("%d",arr[i]);

    }
    printf("enter the element");
    scanf("%d",&ele);
     i=0;
    while(i<num && ele !=arr[i]){
        i++;
}
    if(i<num){
        printf("number found the location %d",i+1);

}
    else{
        printf("number not found location ");
}
    return 0;
}

// Fourth question (swaping the element in a array)

#include<stdio.h>
void main()
{
    int arr[30],i,j,num,temp;
    //clrscr();
    printf("enter the number");
    scanf("%d",&num);
    for(i=0;i<=num;i++){
        scanf("%d",arr[i]);
    }
    j=i-1;
    i=0;
    while(i<j){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    printf("reverse the number");
    for(i=0;i<=num;i++){
        printf("%d",arr[i]);
    }
    getch ();
    }