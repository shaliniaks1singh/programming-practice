//                              The Balance Of Village
// //The Kingdom of Algoria consists of N villages arranged in a straight line.

// For every village, the King wants to determine how balanced it is.

// For a village at position i:

// Left Sum = sum of populations of all villages before i Right Sum = sum of populations of all villages after i

// The balance value is:

// | Left Sum - Right Sum |

// Your task is to calculate the balance value for every village.

// Input Format

// The first line contains an integer N.

// The second line contains N space-separated integers representing the population of each village.

// Constraints

// 1 ≤ N ≤ 100000 1 ≤ population[i] ≤ 10000

// Output Format

// Print N space-separated integers representing the balance value for every village.
#include <iostream>
 using namespace std;
  int main(){
    int n,current=0,lsum=0,rsum=0,total=0,balance=0;
    cout<<"Enter N village: "<<endl;
    cin>>n;
    
    int arr[100000];

    cout<<" Enter "<<endl;
    for(int i = 0 ; i<n;i++){
        cin>>arr[i];
    }
    for(int i =0 ; i<n;i++){
        total=total+arr[i];
    }

    for(int i = 0 ;i<n;i++){
         lsum=current+lsum;
         current = arr[i];
         rsum=total-current-lsum; 
         balance=abs(lsum-rsum);
          cout<<balance<<" ";}
        return 0;
    }




