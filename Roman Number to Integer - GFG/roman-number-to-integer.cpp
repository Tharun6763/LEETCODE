//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    int romanToDecimal(string &str) {
        // code here
        int ans=0;
        unordered_map<char,int>map1{{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'c',100},{'M',1000}};
        for(int i=0;i<str.size();i++)
        {
            if(map1[str[i]]<map1[str[i+1]])
            {
                ans-=map1[str[i]];
            }else
            {
                ans=ans+map1[str[i]];
            }
        }
        return ans;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}
// } Driver Code Ends