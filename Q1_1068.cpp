#include <iostream>

using namespace std;

int main() {
    int n; cin>>n;
    while (n!=1){
        if(n%2==0){
            n=n/2;
            cout<<n<<" ";
        }
        else if(n%2==1){
            n=(n*3)+1;
             cout<<n<<" ";
        }
    }
    return 0;
}