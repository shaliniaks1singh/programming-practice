//                                  lower bound
// #include <iostream>
//  using namespace std;
//   int main(){
//      int n,mid,target,a=1;
//         cout<<"enter the number of element: "<<endl;         
//         cin>> n;
//         int l=0,h=n-1;
//         int arr[n];
//          cout<<"enter the array elements: "<<endl;
//          for(int i=0;i<n;i++){
//                  cin>> arr[i];
//          }
//         cout<<"enter the value of target: "<<endl;         
//         cin>> target;
//         int ans=n;
//         while(h >= l)
//       {
//     mid = (l + h) / 2;

//     if(arr[mid] >= target)
//     {
//         ans = mid;
//         h = mid - 1;
//     }
//     else
//     {
//         l = mid + 1;
//     }
// }
//      cout<<"lower bound : "<<ans<<" ";
//  return 0;
// }   

//                          upper bond
// #include <iostream>
//  using namespace std;
//   int main(){
//      int n,mid,target,a=1;
//         cout<<"enter the number of element: "<<endl;         
//         cin>> n;
//         int l=0,h=n-1;
//         int arr[n];
//          cout<<"enter the array elements: "<<endl;
//          for(int i=0;i<n;i++){
//                  cin>> arr[i];
//          }
//         cout<<"enter the value of target: "<<endl;         
//         cin>> target;
//         int ans=n;
//         while(h >= l)
//       {
//     mid = (l + h) / 2;

//     if(arr[mid] > target)
//     {
//         ans = mid;
//         h = mid - 1;
//     }
//     else
//     {
//         l = mid + 1;
//     }
// }
//      cout<<"lower bound : "<<ans<<" ";
//  return 0;
// }   