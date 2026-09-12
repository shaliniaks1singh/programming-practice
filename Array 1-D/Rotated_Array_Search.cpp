
// To implement a program to search for a given element in a sorted and rotated array using 
//                      the modified binary search technique.

#include <iostream>
 using namespace std;
  int main(){
     int n,mid,target,flag=0;
        cout<<"enter the number of element: "<<endl;         
        cin>> n;
        int l=0,h=n-1;
        int arr[n];
         cout<<"enter the array elements: "<<endl;
         for(int i=0;i<n;i++){
                 cin>> arr[i];
         }
        cout<<"enter the number to find: "<<endl;         
        cin>> target;
        while(h>=l){
        mid=(l+h)/2;
        if(arr[mid]==target){
            cout<<mid<<" ";
            flag =1;
            break;
        }
       else if(arr[l]<=arr[mid]){
         if(arr[l]<=target && target<=arr[mid]){
            h=mid-1;}
            else
            {l=mid+1;}
         }
        
        else{
            if(arr[mid]<=target && target<=arr[h]){
                l=mid+1;
            }
            else
            {h=mid-1;}
        }}
 if (flag==0){
    cout<<"not found"<<endl;
 }
 return 0;
}