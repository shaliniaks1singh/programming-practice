#include <stdio.h>
int main(){
    int n,start,count=0,digit,sum=0,power,i;
    printf("Shalini Singh : 2500971530184\n");
    printf("Enter the number: ");
    scanf("%d",&n);
    start=n;
   while(n>0){
    count++;
    n=n/10;
   }
   n=start;
   while(n>0){
    digit=n%10;
    power=1;
    i=1;
    while(i<=count){
        power=power*digit;
        i=i+1;
    }
    sum=sum+power;
    n=n/10;
   }
   if(sum == start){
   printf("%d is Armstrong number",start);}
   else{
    printf("%d is not Armstrong number",start);
   }
   return 0;
}