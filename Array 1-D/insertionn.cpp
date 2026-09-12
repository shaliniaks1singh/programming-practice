#include <iostream>
 using namespace std;
  int main(){
   int i,j,n,key;
   cout<<"Enter the numbe: ";
   cin>>n;
   int arr[100];
   cout<<"Enter the element: "<<endl;
   for(int i = 0 ; i<n;i++){
      cin>>arr[i];
   }
   for(int i = 1;i<n;i++){
    key=arr[i];
    j=i-1;
    while(j>=0 && arr[j]>key){
        arr[j+1]=arr[j];
        j=j-1;
    }
    arr[j+1]=key;
   }
    cout<<"the sorted array is :"<<endl;
         for(int i =0;i<n;i++){
            cout<<arr[i]<<" ";
         }
   return 0;
  }