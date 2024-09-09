#include<stdio.h>
#include<math.h>
int main(){
	int a,b,HCF,LCM;
	printf("Enter two numbers \n");
	scanf("%d %d",&a,&b);
	int max,min;
	if(a>b){
             max=a;
	min=b;
	} 
	else
	{
            max=b;
            min=a;
	}
	int r=max%min;
	while(r!=0){
	max=min;
	min=r;
	r=max%min;
	}
	printf("The HCF of the two numbers is %d\n",min);
	LCM=(a*b)/min;
	printf("The LCM of the two numbers is %d\n",LCM);
		
}