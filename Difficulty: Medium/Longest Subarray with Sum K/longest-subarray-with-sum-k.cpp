//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        unordered_map<long long,int>m;
        long long curr=0;int maxlen=0;
        for(int i =0;i<arr.size();i++){
            curr+=arr[i];
            if(curr==k){
                 maxlen=i+1;
            }
             if(m.find(curr-k)!=m.end()){
                maxlen=max(maxlen,i-m[curr-k]);
            }
            if(m.find(curr)==m.end()){
            m[curr]=i;
            }
            
            
           
        }
        return maxlen;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore newline character after t

    while (t--) {
        vector<int> arr;
        int k;
        string inputLine;

        getline(cin, inputLine); // Read the array input as a line
        stringstream ss(inputLine);
        int value;
        while (ss >> value) {
            arr.push_back(value);
        }

        cin >> k;
        cin.ignore(); // Ignore newline character after k input

        Solution solution;
        cout << solution.longestSubarray(arr, k) << "\n";
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends