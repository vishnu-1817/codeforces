#include <bits/stdc++.h>
using namespace std;

int mex(vector <int> arr){
    ans =0;
    for (auto it:arr){
        if (it==ans) ans++;
    }
    return ans;
}

int main(){

    int t;
    cin >> t;

    for (int a=0; a<t; a++){
        long n ;
        
        cin >> n ;
        vector<int> arr(n,0);
        for (int i=1; i<n;i++){
            cin>>arr[i];
        }

        int mex = mex(arr);
        

        
    
    }


    return 0;
}