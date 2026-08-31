//                      Take user input; print the string and its length;
   // # include <iostream>
   // # include <string>
   // using namespace std;
   //  int main(){
   //     string str ;
   //  cout<<"Enter :"<<endl;
   //      getline(cin,str);
    
   //  cout<<"Output: "<<endl;
   //      cout<<str<<" ";}
    
    // cout<<endl;
    // cout<<"Lenght : "<<str.size()<<" ";
    // cout<<endl;




//                                 print \n,\0    
   //  # include <iostream>
   //  # include <string>
   // using namespace std;
   //  int main(){
   //  cout<<"\\n"<<endl;
   //  cout<<"\\0"<<endl;}




//                           count vowel and consonant in a string
//   # include <iostream>
//   # include <string>
//   using namespace std;
//     int main(){
//      string str;
//      int i,consonant=0,vowel=0;
//      cout<<"Enter :"<<endl;
//      getline(cin,str);
    
//     for(int i = 0; str[i] != '\0'; i++){
//         if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' ||
//              str[i]=='A'|| str[i]=='E'|| str[i]=='I' || str[i]=='O' || str[i]=='U'){
//                 vowel++;
//              }
//              else if(str[i] != ' '){
//                 consonant++;
//              }}
    
//     cout<<"Vowel = "<<vowel<<" ";
//     cout<<endl;
//     cout<<"Consonant = "<<consonant<<" ";
//     return 0 ;
    
//  }


//                    first and last occurance of character in string 
// #include <iostream>
// #include <string>
// using namespace std;
// int main(){
// string str;
// char ch;
// int first = -1, last = -1;
// cout<<"enter the string: "<<endl;
// getline(cin,str);
// cout<<"Enter the charcter to find: "<<endl;
// cin>>ch;
// for(int i = 0;i<str.size();i++){
// if(str[i] == ch){
// if(first == -1){
//    first = i;
// }
// last=i;
// }}
// cout<<"first occurance = "<<first<<" ";
// cout<<endl;
// cout<<"last occurance = "<<last<<" ";
// return 0;
// }



//                                Reverse a string
// #include <iostream>
// #include <string>
// using namespace std;
// int main(){
// string str;
// cout<<"enter"<<endl;
// getline(cin,str);
// int start=0,end=str.size()-1;
// while(start<=end){
//    swap(str[start],str[end]);
//    start++;
//    end--;
// }
// cout<<"Reverse of string is "<<str<<" ";
// return 0;
// }


//                          check if string is palindrom
// #include <iostream>
// #include <string>
// using namespace std;
// int main(){
//    string str;
//    cout<<"Enter the string: "<<endl;
//    getline(cin,str);
//    int start=0,end=str.size()-1;
//    while(start < end){
//    if(str[start] != str[end]){
//       cout<<"string is not palindrom"<<endl;
//       return 0;
//    }
//    start++;
//    end--;
//    }
//    cout<<"String is palindrome"<<endl;
//    return 0;
// }