#include <iostream>
#include <vector>
using namespace std;

int sub(string s, int index, vector<vector<char>>& ans, vector<char>& temp, int k) {
    if (temp.size() == k) {
        ans.push_back(temp);
        return 1;
    }

    if (index == s.length()) {
        return 0;
    }

    temp.push_back(s[index]);
    int count1 = sub(s, index + 1, ans, temp, k);
    temp.pop_back();

    int count2 = sub(s, index + 1, ans, temp, k);
    return count1 + count2;
}

int main() {
    vector<vector<char>> ans;
    vector<char> temp;
    string s = "abcd";
    cout << "enter: ";
    int k;
    cin>>k;

    int count = sub(s, 0, ans, temp, k);

    for(int i = 0 ; i<ans.size() ; i++){
        for(int j = 0 ; j<ans[i].size();j++){
        cout<<ans[i][j];
    }
    cout<<endl;
}
    return 0;
}