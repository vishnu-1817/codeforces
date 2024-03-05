#include <iostream>
using namespace std;

int main(){
    int t;
    cin>> t;
    for (int i=0; i<t; i++){
        int n;
        cin>>n;

        int x=0, y;
        int flag=0;

        for (x=1; x<=n-3;x++){
            if (x%3 == 0) continue;

            for (y=1; y<n-x;y++){
                // cout<< x<<" "<<y<<" "<<n-x-y<<endl;
                if ((y%3 == 0) || ((n-x-y)%3 == 0)) continue; 
                if ((y == n-x-y) || (x==y) || (x == n-x-y )) continue;
                
                    cout<<"YES"<<endl<< x <<" "<< y<<" "<<n-x-y<<endl;
                    flag++;
                    break;
                
            }
            if (flag) break;
        }
        if (flag==0) cout<<"NO"<<endl;
    }



    return 0;
}