# include <iostream>
using namespace std;
int reverse(int n,int rev){
    if(n==0){
        return rev;
    }
    return reverse(n/10, rev*10 + n%10);
}
int main(){
    int n;
    cin>>n;
   int  temp = n;
  int  rev =  reverse(n,0);
    if (temp == rev){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not Palindrome ";
    }
    return 0;
}