#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        sum+=(i*i*i);
        cout<<(i*i*i)<<"  ";
    }
    cout<<sum<<"\n";
    
    return 0;

}