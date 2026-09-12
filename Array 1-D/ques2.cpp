//                                The Lost Treasure Scroll

// The Royal Library of Algoria contains magical scrolls arranged in sorted order.

// Many scrolls may contain the same spell number.

// The King has asked you to locate a particular spell. Since multiple copies of the same spell may exist, you must find:

// The first occurrence of the spell. The last occurrence of the spell.

// If the spell does not exist in the library, return:

// -1 -1

// Input Format

// The first line contains an integer N.

// The second line contains N space-separated sorted integers.

// The third line contains the target spell number X.

// Constraints

// 1 ≤ N ≤ 100000 -10^9 ≤ arr[i] ≤ 10^9 -10^9 ≤ X ≤ 10^9

// Output Format

// Print two integers:

// first_position last_position

// If the target does not exist, print:

// -1 -1


#include <iostream>
 using namespace std;
  int main(){
    int n,first=-1,last=-1,target;
    cout<<"Enter N village: "<<endl;
    cin>>n;
    
    int arr[100000];

    cout<<" Enter "<<endl;
    for(int i = 0 ; i<n;i++){
        cin>>arr[i];
    }

    cout<<"Enter the target : "<<endl;
    cin>>target;

    for(int i = 0 ; i<n ;i++ ){
        if(arr[i] == target ){
           if(first == -1){
            first=i;
           }
           last=i;
        }
    }
    cout<< first<<" "<<last<<endl;
return 0 ;
}
     




