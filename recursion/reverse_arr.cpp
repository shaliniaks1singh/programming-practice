# include <iostream>
using namespace std;
int reversearr(int arr[],int start,int end){
if(start >= end){
    return 0;
}
swap(arr[start],arr[end]);
reversearr(arr,start +1 ,end -1);
return 0;
}
int main (){
    int arr[]={40,70,80,90,50};
    int n = 5;
    reversearr(arr,0,n-1);
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
    
}