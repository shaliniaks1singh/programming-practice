#include <iostream>
#include <vector>
using namespace std;
void merge(int arr[],int start,int mid,int end){ 
  vector<int> temp(end-start+1);
int index=0;
int right=mid+1; 
int left=start;
 while(left <= mid && right <= end){
      if(arr[left] <= arr[right]){
        temp[index] = arr[left];
        left++;
        index++;
      }
      else{
      temp[index] = arr[right];
        right++; 
        index++;
      }
    }
    //left ele still present
    while(left<=mid){
          temp[index] = arr[left];
          index++;
          left++;
    }
      //left ele still present
      while(right<=end){
          temp[index] = arr[right];
          index++;
          right++;
    }
    index = 0 ;
    while(start<=end){
        arr[start]=temp[index];
        start++;
        index++;
    }
 }
void mergesort(int arr[],int start,int end){
 if(start >= end ){
    return ;
 }
int mid = start + (end - start)/2;
 mergesort(arr,start,mid);       //left divide
 mergesort(arr,mid+1,end);       //right divide
 merge( arr, start, mid, end);
}
 

 int main(){
    int arr[]={2,5,6,3,4,8,9,10,11};
    mergesort(arr,0,8);
    for(int i = 0 ; i < 9 ;i++){
        cout << arr[i] <<"  ";
    }
    cout<<endl;
 }





