
#include <bits/stdc++.h>

using namespace std;
int main(){
    string DNA;
    int arr[4];
    cin>>DNA;
    int a,t,c,g;
    a= t= c= g= 0;
    for (int i=0;i<DNA.length();i++){
        if(DNA[i]=='A'){
            a++;
        }
        else if(DNA[i]=='T'){
            t++;
        }
        else if(DNA[i]=='C'){
            c++;
        }
        else if(DNA[i]=='G'){
            g++;
        }
    }
    cout<<max(a,max(t,max(c,g)));
}