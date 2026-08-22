// #include <iostream>
//  using namespace std;
//   int main(){
//      int n,min,temp;
//         cout<<"enter the number of element: "<<endl;         
//         cin>> n;
//         int arr[n];
//          cout<<"enter the array elements: "<<endl;
//          for(int i=0;i<n;i++){
//                  cin>> arr[i];
//          }
//          for(int i = 0;i<n-1;i++)
//          {   min=i;
//             for(int j=i;j<n;j++){
//                 if(arr[j]<arr[min]){
//                     min=j;
//                 }
//                     temp=arr[min];
//                     arr[min]=arr[i];
//                     arr[i]=temp;
                
//             }
//          }
//         cout<<"the sorted array is :"<<endl;
//          for(int i =0;i<n;i++){
//             cout<<arr[i]<<" ";
//          }
//          return 0;
//         }

//                                      Selection Sort (Practise 1)
#include <iostream>
 using namespace std;
  int main(){
   int i,j,n,minindex,temp;
   cout<<"Enter the numbe: ";
   cin>>n;
   int arr[100];
   cout<<"Enter the element: "<<endl;
   for(int i = 0 ; i<n;i++){
      cin>>arr[i];
   }
   for(int i = 0; i<n;i++){
      minindex=i;
      for(int j = i+1;j<n;j++){
        if(arr[j]<arr[minindex]){
              minindex=j;
        }
      }
      swap(arr[i],arr[minindex]);
   }
   cout<<"the sorted array is :"<<endl;
         for(int i =0;i<n;i++){
            cout<<arr[i]<<" ";
         }
   return 0;
  }













