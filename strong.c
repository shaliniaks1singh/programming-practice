#include<stdio.h>
int main(){
    int n,i,fact,rem,sum=0,temp;
    printf("Enter the number:");
    scanf("%d",&n);
    temp=n;
    while(n>0){
        rem=n%10;
        fact=1;
          for(i=1;i<=rem;i++){
            fact=fact*i;
          }
        sum=sum+fact;
        n=n/10;  
    }
    if(temp==sum){
        printf("strong number\n");
    }
    else{
        printf("not strong number\n");
    }
    return 0;

}