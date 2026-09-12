#include <iostream>
 using namespace std;
  int main(){
     int n,temp;
        cout<<"enter the number of element: "<<endl;         
        cin>> n;
        int arr[n];
         cout<<"enter the array elements: "<<endl;
         for(int i=0;i<n;i++){
                 cin>> arr[i];
         }
         for(int i = n-1;i>=0;i--){
            for(int j = 0;j<=i-1;j++){
                if(arr[j]>arr[j+1]){
                    temp=arr[j+1];
                    arr[j+1]=arr[j];
                    arr[j]=temp;
                }
            }
            
         }
         cout<<"the sorted array is :"<<endl;
            for(int i =0;i<n;i++){
            cout<<arr[i]<<" ";
         }  
         return 0;
        }
