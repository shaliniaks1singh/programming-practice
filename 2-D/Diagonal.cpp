#include <iostream>
 using namespace std;
  int main(){
    int m,n,d1=0,d2=0;
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
    for(int i = 0 ;i<m;i++){
        d1=d1+arr[i][i];
        d2=d2+arr[i][n-1-i];
    
    }
    cout<<"d1 "<<d1<<endl; 
    cout<<"d2 "<<d2<<endl; 
       return 0;
}
