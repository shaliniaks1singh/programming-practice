#include <stdio.h>
int main(){
int n=223452,key,p,count=0;
key=2;
while(n>0)
{p=n%10;
if(p==key)
{
    count++;
n=n/10;
}
else
continue;
}
printf("%d",count);
return 0;
}
