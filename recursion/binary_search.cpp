#include <iostream>
using namespace std;
int binarysearch(int arr[],int left,int right,int target){
    if(left > right){
        return -1;
    }
   int mid = (left + right)/2;
   if(arr[mid] == target){
    return mid;
   }
   if(target > arr[mid]){
    return binarysearch(arr,mid + 1,right,target);
   }
   else
   return binarysearch(arr,left,mid - 1,target);
}
int main(){
    int arr[]={1,2,3,4,5};
    int n = 5;
    cout<<binarysearch(arr,0,n-1,4);
    return 0;
}
