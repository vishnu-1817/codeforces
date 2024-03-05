#include <iostream>
#include <string>

using namespace std;

int main(){
    int t;
    cin >> t;

    for (int i=0; i<t;i++){

        int n,k;
        cin >> n>>k;

        string ans;
        for (int j=0;j<k;j++){
            // int asciiValue = static_cast<int>(ch);
            ans += static_cast<char>(97+j);
        }

        for (int j=0;j<n;j++){
            ans+=ans;
        }

        cout<< ans;

    }
}
