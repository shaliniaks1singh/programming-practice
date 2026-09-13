#include<stdio.h>
int main(){
int x,n,ans=1;
printf("Shalini Singh : 2500971530184\n");
printf("Enter the base:");
scanf("%d",&x);
printf("Enter the power:");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{ ans=ans*x;
}
printf("%d^%d = %d", x, n, ans);
return 0; 
}