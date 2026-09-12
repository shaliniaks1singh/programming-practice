#include <iostream>
 using namespace std;
  int main(){
    int m,n,j,i;
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
    int left=0,right=n-1; // column control left and right
    int top=0,bottom=m-1; // row control top and bottom
    while(top<=bottom && left<=right){
    for(j=left;j<=right;j++){
        cout<<arr[top][j]<<" ";
    }
    top++;
    for(i=top;i<=bottom;i++){
        cout<<arr[i][right]<<" ";
    }
    right--;
    if(top<=bottom){
    for(j=right;j>=left;j--){
        cout<<arr[bottom][j]<<" ";
    }
    bottom--;}
    if(left<=right){
    for(i=bottom;i>=top;i--){
        cout<<arr[i][left]<<" ";
    }
    left++;}}
    return 0;
}

