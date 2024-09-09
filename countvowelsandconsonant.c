#include<stdio.h>
#include<string.h>
int main(){
  char str[100];
  printf("Enter any String\n");
  //fgets(str, sizeof(str), stdin);
  scanf("%s",&str);
  printf("The string is %s ",str);
  int n=strlen(str),vcount=0,ccount=0,scount=0;
  for(int i=0;i<n;i++){
  if(str[i]=='A'|| str[i]=='E'||str[i]=='I'|| str[i]=='O'|| str[i]=='U'|| str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
  vcount++;
  }
  ccount=n-vcount;
  printf("\nThe number of vowels are %d \n",vcount);
   printf("and Consonant are %d \n",ccount);
}