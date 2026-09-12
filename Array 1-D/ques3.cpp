//                              The Royal Square Root

// The mathematicians of the Kingdom of Algoria have discovered a magical number X.

// The King wants to know the largest integer whose square is less than or equal to X.

// Since the value of X can be very large, using simple iteration may take too long.

// Help the Royal Mathematicians find the answer efficiently.

// The integer square root of X is defined as the largest integer r such that: r × r ≤ X

// Input Format

// A single integer X.

// Constraints

// 0 ≤ X ≤ 2^31 - 1

// Output Format

// Print the integer square root of X.


#include <iostream>
 using namespace std;
  int main(){
    long long  X,h,l,mid,ans=0;
    
    cout<<"Enter the target : "<<endl;
    cin>>X;

    h=X;
    l=0;

    while(l<=h){
       mid=(h+l)/2;
       if(mid*mid <= X){
        ans=mid;
        l=mid+1;
       }
       else
       h=mid-1;
    }
   cout<<ans<<" ";
    return 0 ;
}









