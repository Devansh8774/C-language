#include<stdio.h>
int main(){

int n;
printf("enter the size of an array");
scanf("%d",&n);
int arr[n];
printf("enter your element \n");
for (int i=0;i<n;i++){
    scanf("%d",&arr[n]);
}
int max=arr[0];
int min=arr[0];
for(int i=0;i<n;i++){
        min=arr[i];
    if(arr[i]<min){
        min=arr[i];
    }
    if(arr[i]>max){
        max=arr[i];
    }

} 
int sum = min +max;
printf("%d",sum); 
}  


