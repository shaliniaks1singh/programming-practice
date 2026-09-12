//                                  Display sum of even no. and product of odd no. in an array
// #include <iostream>
// using namespace std;
//   int main(){
//     int sum=0,product=1;
//     int arr[]={2,3,4,6,7,5};
//     for(int i=0; i<6; i++){
//         if(i%2==0){
//             sum=sum+arr[i];
//         }
//         else{
//             product=product*arr[i];
//         }
//     }
//     cout<<"Sum = "<<sum<<endl;
//     cout<<"Product = "<<product<<endl;
// }


 //                                                To print elements in array 
// #include <iostream>
// using namespace std;
// int main(){
//     int marks[5]={95,90,99,97,94};

//     int size = sizeof(marks)/sizeof(int);

//     for(int i=0;i<size;i++){

//         cout<<marks[i]<<endl;
//     }
// return 0;
// }        


              //                                              insert n numbers in array 
// #include <iostream>
// using namespace std;
// int main() {
//     int marks[5];
//    int size = sizeof(marks)/sizeof(int);
//    for(int i=0; i<size ; i++){
//     cin>>marks[i];}
//     for(int i=0; i<size ; i++){
//     cout<<"you entered:"<<marks[i]<<endl;
//    }
//    return 0;}


          //  find smallest/largest in array
//  #include <iostream>
//  #include <climits>
// using namespace std;
// int main(){
//     int arr[]={2,3,4,6,7,5};
//     int size= sizeof(arr)/sizeof(int);
//     int smallest = INT_MAX;
//     for(int i = 0; i<size;i++){
//         if(arr[i]<smallest){
//             smallest=arr[i];
//         }}
//         cout<<"smallest digit = "<<smallest<<endl;
    
//     return 0;}

//                     method 2:
// #include <iostream>
// using namespace std;
// int main(){
//     int arr[]={2,3,4,6,7,5};
//     int size= sizeof(arr)/sizeof(int);
//     int smallest = arr[0];
//     for(int i = 1; i<size;i++){
//         if(arr[i]<smallest){
//             smallest=arr[i];
//         }}
//         cout<<"smallest digit = "<<smallest<<endl;
    
//     return 0;}


//                                                              largest digit
// #include <iostream>
// using namespace std;
// int main(){
//     int arr[]={2,3,4,6,7,5};
//     int size= sizeof(arr)/sizeof(int);
//     int largest = arr[0];
//     for(int i = 1; i<size;i++){
//         if(arr[i]>largest){
//             largest=arr[i];
//         }}
//         cout<<"largest digit = "<<largest<<endl;
    
//     return 0;}


        // find smallest (index) and largest(index)


                    //                                          linear search
// #include <iostream>
// using namespace std;
// int linearsearch(int arr[],int size,int target){
//     for(int i=0;i<size;i++){
//     if (arr[i]==target){
//         return i;
//     }
//     }
//        return -1; /* code */
    
// }
// int main(){
//     int arr[]={2,3,4,6,7,5};
//     int size= sizeof(arr)/sizeof(int);
//     int target=7;
//     cout<<linearsearch(arr,size,target)<<endl;
//  return 0;}

//                                                           insertion of array
// #include <iostream>
// using namespace std;
//  int main(){
//      int arr[]={2,3,4,6,7,5};
//      int size= sizeof(arr)/sizeof(int);
//      int pos,value;
//      cout<<"Elements in array are: \n"<<endl;
//      for(int i = 0; i<size;i++){
//         cout<<arr[i]<<endl;
//      }
//      cout<<"enter position where you want to insert:";
//      cin>>pos;
//       cout<<"enter the element you want to insert: ";
//       cin>>value;
//       for(int i = size-1;i>size;i--){
//         arr[i+1]=arr[i];
//       }
//        arr[pos]=value;
//        size=size+1;
//       cout<<"Elements in array are: \n"<<endl;
//      for(int i = 0; i<size;i++){
//         cout<<arr[i]<<endl;
//      }
//        return 0;
//     }

//                                                    deletion of array
// #include <iostream>
// using namespace std;
//  int main(){
//      int arr[]={2,3,4,6,7,5};
//      int size= sizeof(arr)/sizeof(int);
//      int pos,value;
//      cout<<" Elements in array are: \n"<<endl;
//      for(int i = 0; i<size;i++){
//         cout<<arr[i]<<endl;
//      }
//      cout<<"enter position where you want to delete:";
//      cin>>pos;
//       value = arr[pos];
//       for(int i = pos ;i<size;i++){
//         arr[i]=arr[i+1];
//       }
//        size=size-1;
//       cout<<"Elements in array are: \n"<<endl;
//      for(int i = 0; i<size;i++){
//         cout<<arr[i]<<endl;
//      }
//        return 0;
//     }

//                                                 Second largest element in array
//     #include <iostream>
//     using namespace std;
//     int main(){
//         int secondlargest=arr[0],largest=arr[0];
//         int arr[]={2,5,8,6,9,7,12,13};
//         int size = sizeof(arr)/sizeof(int);
//         for(int i=0;i<size;i++){
//                 if(arr[i]>largest){
//                         secondlargest=largest;
//                         largest=arr[i];
//                 }
//               else if(arr[i]==largest && arr[i]>secondlargest){
//                 secondlargest=arr[i];
//               }  
//         }
//         cout<<"Secondlargest =  "<<secondlargest<<endl;
//         return 0;
//     }

// #include <iostream>
//     using namespace std;
//     int main(){ int n,arr[400],copy[400];
//         cout<<"enter the number of element: "<<endl;
//         cin>> n;
//         cout<<"enter the array elements :"<<endl;
//         for(int i=0;i<n;i++){
//                 cin>> arr[i];
//         }
//         for(int i=0;i<n;i++){
//                 copy[i]=arr[i];
//         }
//         for(int i=0;i<n;i++){
//                 cout<< copy[i];
//         }

//         for(int i=0;i<n;i++){
//                 for(int j=i+1;i<n;i++){
//                         if(arr[j]==arr[i]){
//                                 cout<<arr[i];
//                                 break;
//                         }
//                 }
//         }
        
//         return 0;
// }


//                                   increment of each value associated with index by 2
//  #include <iostream>
// using namespace std;
//  int main(){
//      int arr[]={3,6,9,11,10};
//      int size= sizeof(arr)/sizeof(int);
//      for(int i=0;i<size;i++){
//         arr[i]=arr[i]+2;
//      }
//      for(int i=0;i<size;i++){
//         cout<<arr[i]<<endl;
//      }
//      return 0;}



//    Swap elements of an array { arr=[3,6,9,11,10,12] as input and output arr=[6,3,11,9,12,10] }
//  #include <iostream>
//  using namespace std;
//   int main(){
//      int n,temp=0;
//         cout<<"enter the number of element: "<<endl;         
//         cin>> n;
//         int arr[n];
//          cout<<"enter the array elements :"<<endl;
//          for(int i=0;i<n;i++){
//                  cin>> arr[i];
//          }
//         for(int i=0;i+1<n;i=i+2){
//          temp=arr[i];
//          arr[i]=arr[i+1];
//          arr[i+1]=temp;
//       }
//       for(int i=0;i<n;i++){
//          cout<<arr[i]<<" ";
//      }
//      return 0;}



//                                               Lost Roll Number 
// #include <iostream>
// using namespace std;
// int main(){
//         int N,X,a=0;
//         cout<<"Enter the number of student:\n";
//                 cin>>N;  
//          int arr[N]; 
//         cout<<"Enter the ROLL NUMBERs :\n";
//         for(int i=0;i<N;i++){
//                 cin>>arr[i];
//         }
//         cout<<"Enter the Roll Number to find :\n";
//         cin>>X;
//         for (int i = 0; i < N; i++)
//         {
//            if(arr[i]==X){
//               cout<<i<<endl;
//               a=1;
//               break;
//            }    
//         }
//         if(!a){
//                 cout<<"-1"<<endl;
//         }
//        return 0;
        
// }


//                                                 Mountain Trail Inspection(sorted or not)
// #include <iostream>
// using namespace std;
// int main(){
//         int N,a=0;
//         cout<<"enter the number of checkpoints: \n";
//         cin>>N;
//         int arr[N];
//         cout<<"heigth recorded at each checkpoint:\n";
//         for(int i = 0;i<N;i++){
//                 cin>>arr[i];
//         }
//         for(int i = 0; i<N-1; i++){
//                 if(arr[i]>arr[i+1]){
//                         a=1;
//                         break;
//                 }
//         }
//         if(!a){
//                 cout<<"YES"<<endl;
//         }
//         else{
//                 cout<<"NO"<<endl;
//         }
//         return 0;
// }


//  The Brave Warriors(ex - 17 is greater than every element to its right. 5 is greater than 2. 2 is the last element, so it is always a leader.)
// #include <iostream>
// using namespace std;
// int main(){
//         int N,k=0;
//         cout<<"enter the no. of warrior"<<endl;
//         cin>>N;
//         int arr[N],leader[N];
//         cout<<"strength of the warror"<<endl;
//         for(int i =0 ; i<N;i++){
//                 cin>>arr[i];
//         }
//         int max=arr[N-1];
//         for(int i= N-1;i>=0;i--){
//                 if(arr[i]>=max){
//                 leader[k]=arr[i];
//                 k++;
//                 max=arr[i];}
//         }
//         for(int  i=k-1;i>=0;i--){
//                 cout<<leader[i]<<" ";             //remember
//         }
// return 0;
//  }


//                            Point half array,I/P [1,2,3,4,5], O/P [1,2,3]
// #include <iostream>
//  using namespace std;
//   int main(){
//      int n,temp=0;
//         cout<<"enter the number of element: "<<endl;         
//         cin>> n;
//         int arr[n];
//          cout<<"enter the array elements :"<<endl;
//          for(int i=0;i<n;i++){
//                  cin>> arr[i];
//          }
//          for(int i=0;i<=(n+1)/2;i++){
//                 cout<<arr[i]<<" ";
//          }
//          return 0;}


//    Print elements greater than average I/P [15,12,17,16,10,9,13], calculate avg.
//  #include <iostream>
//  using namespace std;
//   int main(){
//      int n,sum=0;
//         cout<<"enter the number of element: "<<endl;         
//         cin>> n;
//         int arr[n];
//          cout<<"enter the array elements :"<<endl;
//          for(int i=0;i<n;i++){
//                  cin>> arr[i];
//          }
//          for(int i=0;i<n;i++){
//                 sum = sum + arr[i];
//          }
//          int avg=sum/n;

//            for(int i = 0 ; i<n;i++){
//                 if(arr[i]>avg){
//                         cout<<arr[i]<<" ";
//                 }
//            } 
//            return 0;}

 //    Find missing no. From 1 to N .Eg.I/P { 2,1,6,8,3,7,5} O/P=4. Min =? And Max=?          
// #include <iostream>
//  using namespace std;
//   int main(){
//      int n,sum1=0,sum2=0;
//         cout<<"enter the number of element: "<<endl;         
//         cin>> n;
//         int arr[n];
//          cout<<"enter the array elements :"<<endl;
//          for(int i=0;i<n;i++){
//                  cin>> arr[i];
//          }
//          int max=arr[n-1];
//          int min=arr[n-1];
//          for(int i=n-1;i>=0;i--){
//                 if(arr[i]>=max){
//                 max=arr[i];}
//          }
//          for(int i=n-1;i>=0;i--){
//                 if(arr[i]<=min){
//                 min=arr[i];}
//          }
//          for(int i = 0;i<=max;i++){
//                     sum1 = sum1 + i;   // sum 1 = expected sum
//          }
//          for(int i = 0;i<n;i++){
//                     sum2 = sum2 + arr[i];      // sum 2 = actual sum
//          }
//          int missing=sum1-sum2;
//          cout<<"missing number "<<missing<<endl;
//          cout<<"max "<<max<<endl;
//          cout<<"min "<<min<<" ";
//          return 0;
//         }

//                                       rotating sorted array

// #include <iostream>
//  using namespace std;
//   int main(){
//      int n,temp;
// //      cout<<"Enter the value of Key:"<<endl;
// //      cin>>k;
//         cout<<"enter the number of element: "<<endl;         
//         cin>> n;
//         int arr[n];
//          cout<<"enter the array elements :"<<endl;
//          for(int i=0;i<n;i++){
//                  cin>> arr[i];
//          }
// //      int size=sizeof(arr)/sizeof(int);
//       temp=arr[n-1];
//      for(int i=n-1; i>=0;i--){
//         arr[i]=arr[i-1];
//      }
//      arr[0]=temp;
//      for(int i=0;i<n;i++){
//        cout<< arr[i]<<" ";
//          }
//          return 0;
//         }




//                                         n times rotating sorted array
// #include <iostream>
//  using namespace std;
//   int main(){
//      int n,k;
//      cout<<"Enter the value of Key:"<<endl;
//      cin>>k;
//         cout<<"enter the number of element: "<<endl;         
//         cin>> n;
//         int arr[n];
//          cout<<"enter the array elements :"<<endl;
//          for(int i=0;i<n;i++){
//                  cin>> arr[i];
//          }
//          int temp[n];
//          for(int i= n-1;i>=0;i--){
//         temp[(k+i)%n]=arr[i];
// }
// cout<<"Rotational Sorted Array"<<endl;
//  for(int i=0;i<n;i++){
//                  cout<<temp[i]<<" ";}
         
//          return 0;
//         }


//                                            check if given array ia rotated sorted

//  #include <iostream>
//  using namespace std;
//   int main(){
//      int n,count=0;
//         cout<<"enter the number of element: "<<endl;         
//         cin>> n;
//         int arr[n];
//          cout<<"enter the array elements :"<<endl;
//          for(int i=0;i<n;i++){
//                  cin>> arr[i];
//          }
//          for(int i = 0;i<n-1;i++){
//       if(arr[i]>arr[i+1]){
//             count++;
//       }}
//       if(arr[n-1]>arr[0]){
//         count++;
//       }
//       if(count==1|| count ==0){
//         cout<<"yes"<<endl;
//       }
//       else{
//         cout<<"NO"<<endl;
//       }
//       return 0;
// }


//                                     Binary Search
// #include <iostream>
//  using namespace std;
//   int main(){
//      int n,mid,key,a=1;
//         cout<<"enter the number of element: "<<endl;         
//         cin>> n;
//         int l=0,h=n-1;
//         int arr[n];
//          cout<<"enter the array elements: "<<endl;
//          for(int i=0;i<n;i++){
//                  cin>> arr[i];
//          }
//         cout<<"enter the value of key: "<<endl;         
//         cin>> key;
//         while(h>=l){
//         mid=(l+h)/2;
//         if(arr[mid]==key){
//                 cout<<"the index of element is:"<<mid<<endl;
//                 a=0;
//                 break;
//         }
//         else if(arr[mid]>key){
//                 h=mid-1;
//         }
//         else{
//                 l=mid+1;
//         }}
//         if(a==1){
//                 cout<<"Not Found"<<endl;
//         }
        
//         return 0;
//     } 



//                               Balanced Bridge
// #include <iostream>
//  using namespace std;
//   int main(){
//      int n,total=0,left=0,right=0,s=1,current;
//         cout<<"enter the number of element: "<<endl;         
//         cin>> n;
//         int arr[n];
//          cout<<"enter the array elements: "<<endl;
//          for(int i=0;i<n;i++){
//                  cin>> arr[i];
//          }
//          for(int i =0 ; i<n;i++){
//                 total=total+arr[i];
//          }
// for (int i = 0 ;i<n;i++){
//         current = arr[i];
//         right=total-current-left; 
//         if(left==right){
//            cout<<i<<endl;
//            s=0;
//            break; 
//         }
//         left = current+left;
// }
// if(s==1){
//  cout<<-1<<endl ;}
//  return 0;
// }



//                       SEAT ARRANGEMENT
// #include <iostream>
// using namespace std;


// int main() {
//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */
//      int n,mid,key,a=1;        
//         cin>> n;
//         int l=0,h=n-1;
//         int arr[n];
//          for(int i=0;i<n;i++){
//                  cin>> arr[i];
//          }         
//         cin>> key;
//         while(h>=l){
//         mid=(l+h)/2;
//         if(arr[mid]==key){
//                 cout<<mid<<endl;
//                 a=0;
//                 break;
//         }
//         else if(arr[mid]>key){
//                 h=mid-1;
//         }
//         else{
//                 l=mid+1;
//         }}
//         if(a==1){
//                 cout<<l<<endl;
//         }
        
         
//     return 0;
// }


//                                       Shifted Leaderboard
// #include <iostream>
// using namespace std;


// int main() {
//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */
//      int n;
//      int count=0, index ;
              
//         cin>> n;
//         int arr[n];
        
//          for(int i=0;i<n;i++){
//                  cin>> arr[i]; }
//       for(int i = 0;i<n-1;i++){
//       if(arr[i]>arr[i+1]){
//             count++;
//             index=i;
//       }} 

// if(count==0){
//     cout<<0;
// }
//  else if(count==1){
//     cout<<n-(index+1);
// }
// else{
//     cout<<-1;
// }
         
//     return 0;
// }




