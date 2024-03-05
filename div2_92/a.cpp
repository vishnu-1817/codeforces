#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    for (int a=0; a<t; a++){
        long n ;
        string s;
        cin >> n ;
        cin >> s;

        int b=1;

        int i=0, j = s.size()-1;
        while (i<j){
            if (s[i]==s[j]){
                i++; j--;
                continue;
            }
            if (s[i]>s[j]) b=0;
            else b=1;
            break;

            
        }

        if (b){
            cout << s;
        }

        else {
            string s1= s;
            reverse(s.begin(), s.end());
            cout << s+s1;


        }
        cout<<endl;
    }


    return 0;
}