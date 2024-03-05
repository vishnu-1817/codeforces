#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    for (int i=0; i<t; i++){
        int n,m;
        long int k, sum = 0, ans;
        cin >> n>>m>>k;
        vector <int> a;
        vector <int> b;
        int e;
        for (int j=0; j<n; j++){
            cin>>e;
            a.push_back(e);
            sum+=e;
        }
        for (int j=0; j<m; j++){
            cin>>e;
            b.push_back(e);
        }

        int min1, min2, max1, max2;
        min1 = *min_element(a.begin(), a.end());
        max1 = *max_element(a.begin(), a.end());
        min2 = *min_element(b.begin(), b.end());
        max2 = *max_element(b.begin(), b.end());

        if (max1 <= min2){
            if (k%2) ans = sum + max2 - min1 ;
            else ans = sum;

        }
        else if (min1>=max2){
            if (k%2) ans = sum  ;
            else ans =  sum  + min2 - max1;

        }
        else if ((min1 <= min2)&&( max1>=min2) &&(max1<=max2)){
            if (k%2) ans = sum + max2 - min1 ;
            else ans = sum;

        }
        else if ((min1 <= min2)&&(max1>=max2)){
            if (k%2) ans = sum + max2 - min1 ;
            else ans = sum + max2 - min1 - max1 + min2;

        }
        else if ((min1 >= min2)&&(max1<=max2)){
            if (k%2) ans = sum + max2 - min1 ;
            else ans = sum  - min1  + min2;

        }
        else if ((min1 >= min2)&&(max1>=max2)){
            if (k%2) ans = sum + max2 - min1 ;
            else ans =  sum + max2 - min1 + min2 - max1;
        }


        

        cout<<ans <<endl;
        
        

    }

    return 0;
}



