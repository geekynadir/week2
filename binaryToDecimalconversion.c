#include<stdio.h>
int main(){
int binary,pow=1,r;
 long long res=0;
 printf("Enter any binary number\n");
 scanf("%d",&binary);
 printf("The Binary Number is %d\n",binary);
 while(binary>0){
  r=binary%10;
  res+=r*pow;
  pow*=2;
  binary/=10;
 }
  printf("The decimal conversion is %d",res);
}
