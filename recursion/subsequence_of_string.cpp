#include <iostream>
#include <vector>
using namespace std;

void sub(string s,int index,vector<vector<char>>&ans,vector<char>temp){
if(index == s.length()){
    ans.push_back(temp);
    return;
}
temp.push_back(s[index]);           // include
sub(s,index+1,ans,temp);
temp.pop_back();
sub(s,index+1,ans,temp);            // exclude
}
int main(){
    vector<vector<char>> ans;
    vector<char> temp;
    string s = "abc";
    sub(s,0,ans,temp);
    int n = ans.size();
    for(int i = 0 ; i<n ; i++){
        for(int j = 0 ; j<ans[i].size();j++){
        cout<<ans[i][j];
    }
    cout<<endl;
}
    return 0 ;
}