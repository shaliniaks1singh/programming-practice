#include <iostream>
 using namespace std;
  int main(){
    int m,n,sum;
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
          sum = 0;
        for(int j = 0;j<n;j++){
             sum = sum + arr[i][j];}
             cout<<sum<<endl;
        }

    return 0 ;
  }
