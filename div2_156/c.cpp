#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>> t;
    for (int z=0; z<t; z++){
        string s;
        cin >> s;

        int n;
        cin >> n;

        int k=1, i=0, m= -1 ;
        unordered_map <int,int> mpp;
        int j= s.size();

        while (k!=n){

            if (i==j){
                mpp[m]++;
                m=-1;
                i=0;
            }

            if (mpp[i]){
                i++;
                continue;
            }
 
            if ( m <= s[i]-'a'+1){
                m=i;
            }
            i++;
            k++;
        }
        cout << s[i];



    }
    return 0;
}