#include <iostream>
 using namespace std;
  int main(){
    int m,n,sum=0;
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
        for(int j = 0;j<n;j++){
            cout<<arr[j][i]<<" "<<endl;
        }
  }

  return 0;
}
