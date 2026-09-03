#include<stdio.h>
int main(){
    int n,rem,sum=0,product=1,temp;
    printf("Enter the number:");
    scanf("%d",&n);
    temp=n;
    while(n>0){
        rem=n%10;
        sum=sum+rem;
        product=product*rem;
        n=n/10;
    }
    if(sum==product)
    {
        printf("%d is the spy number/n",temp);
    }
    else{
        printf("%d is not spy number /n",temp);
    }
    return 0;
}