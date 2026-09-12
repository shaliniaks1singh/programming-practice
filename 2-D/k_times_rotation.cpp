#include <iostream>
 using namespace std;
  int main(){
    int m,n,j,i,z,k,temp;
    cout<<"Enter the  row: "<<endl;
    cin>>m;
    cout<<"Enter the column: "<<endl;
    cin>>n;
    int arr[100][100];
    cout<<"enter the values: "<<endl;
    for(int i = 0 ;i<m;i++){
        for(int j = 0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Enter how many times you want to rotate: ";
    cin>>z;
    z=z%4;
    while(z>=0){
   for(int i = 0 ;i<m;i++){
        for(int j = i+1;j<n;j++){
            temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }}

    for(int i = 0 ;i<m;i++){
        int j = 0;
            k=n-1;
        while(j<=k){
            temp=arr[i][j];
            arr[i][j]=arr[i][k];
            arr[i][k]=temp;
           k--;
           j++;}
        }
    z--;}
     for(int i = 0 ;i<m;i++){
        for(int j = 0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        }
        return 0;
   
  }