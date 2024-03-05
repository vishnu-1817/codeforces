#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    for (int i=0; i<t; i++){
        int a,b,n,e;
        long int ans =0;

        vector <int> nums;
        cin>>a>>b>>n;
        for (int j=0; j<n; j++){
            cin>>e;
            nums.push_back(e);
        }
        // unordered_map<int,int> mpp;
        

        int min = *min_element(nums.begin(), nums.end());
        for (int j=0; j<n; j++){
            
            if (nums[j] >= a){
                // mpp[j]++;
                ans += a;
            }
            else {
                ans += nums[j];
            }

        }

        if ( min <= a-b) {ans += b-1;}
        else {ans+= a-min;}

    cout <<ans<<endl;
    }

    return 0;
}

