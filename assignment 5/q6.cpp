#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=2;i<(2*n+1);i+=2){
        cout<<i<<"\n";
    }
    return 0;
}