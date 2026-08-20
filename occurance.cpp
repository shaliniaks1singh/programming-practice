#include <iostream>
 using namespace std;
  int main(){
     int n,target,first=-1,last = -1;
        cout<<"enter the number of element: "<<endl;         
        cin>> n;
        int arr[n];
         cout<<"enter the array elements: "<<endl;
         for(int i=0;i<n;i++){
                 cin>> arr[i];
         }
        cout<<"enter the value of target: "<<endl;         
        cin>> target;
        for (int i = 0;i<n;i++){
            if(arr[i]==target){
                if(first==-1){
                    first=i;
                }
                else 
                last = i ;
            }
        }
        if(first == -1)
    {
        cout << "Target not found" << endl;
    }
    else
    {
        cout << "First occurrence = " << first << endl;
        cout << "Last occurrence = " << last << endl;
    }
    
        return 0;
    }