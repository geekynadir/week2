#include<stdio.h>
#include<string.h>
int main(){
int decimal,pow=1,r;
char res[100]="";
char temp[2];
 printf("Enter any decimal number\n");
 scanf("%d",&decimal);
 printf("The Decimal Number is %d\n",decimal);

 while(decimal>0){
  r=decimal%2;
  sprintf(temp, "%d", r);        // Convert remainder to string
  strcat(res, temp);             //Append  the converted numebr into string 
  decimal/=2;
 }
 strrev(res);
  printf("The decimal conversion is %s",res);
}