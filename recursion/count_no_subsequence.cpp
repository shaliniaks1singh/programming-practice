#include <iostream>
#include <vector>
using namespace std;

int sub(string s,int index,vector<vector<char>>&ans,vector<char>temp){
    if(index == s.length()){
        ans.push_back(temp);
        return 1;
    }

    temp.push_back(s[index]);           // include
    int count1 = sub(s,index+1,ans,temp);
    temp.pop_back();

    int count2 = sub(s,index+1,ans,temp); // exclude
    return count1 + count2;
}
int main(){
    vector<vector<char>> ans;
    vector<char> temp;
    int count = 0;
    string s = "abcd";
    count = sub(s,0,ans,temp);
    int n = ans.size();
    for(int i = 0 ; i<n ; i++){
        for(int j = 0 ; j<ans[i].size();j++){
        cout<<ans[i][j];
    }
    cout<<endl;
}
    cout<<count;
    return 0;
}