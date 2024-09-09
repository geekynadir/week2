#include<stdio.h>
int count(int a){
 int cou=0;
 while(a>0){
 int r=a%10;
 cou+=r;
 a/=10;
 }
 return cou;
}
int main(){
int n;
printf("Enter a number\n");
scanf("%d",&n);
printf("\nThe number is %d",n);
printf("\nSum of Digits = %d ",count(n));
}