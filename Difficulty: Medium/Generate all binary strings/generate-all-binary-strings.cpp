//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

//User function Template for C++

class Solution{
public:
    void helper(vector<string>&v,string temp,int num){
       if( temp.size()==num){
           v.push_back(temp);
           return;
       }
       
       if(temp[temp.size()-1]!='1'){
           helper(v,temp+'1',num);
       }
       helper(v,temp+'0',num);
       return;
        
    }

    vector<string> generateBinaryStrings(int num){
        vector<string>v;
        helper(v,"",num);
        sort(v.begin(),v.end());
        return v;
    }
};


//{ Driver Code Starts.
int main(){
    int t = 1;
    cin >> t;


    while(t--){
        //Input
        int n; cin >> n;

        Solution obj;
        
        vector<string> v = obj.generateBinaryStrings(n);
        for(auto it:v) cout<<it<<" ";
        cout << endl;
    
cout << "~" << "\n";
}

    return 0;
}

// } Driver Code Ends