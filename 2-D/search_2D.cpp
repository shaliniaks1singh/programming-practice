#include <iostream>
 using namespace std;
  int main(){
    int m,n,sum=0,flag=0,key,i,j;
    cout<<"Enter the  row: "<<endl;
    cin>>m;
    cout<<"Enter the column: "<<endl;
    cin>>n;
    cout<<"enter number to search: ";
    cin>>key;
    int arr[100][100];
    cout<<"enter the values: "<<endl;
    for(int i = 0 ;i<m;i++){
        for(int j = 0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i = 0 ;i<m;i++){
        for(int j = 0;j<n;j++){
            if(arr[i][j]==key){
                cout<<"Found at index:  "<<i<<","<<j <<endl;
                flag=1;
                break;
            }
        }}
     if(flag==0){
        cout<<"Not Found"<<endl;
     }   
    
  return 0;
}
