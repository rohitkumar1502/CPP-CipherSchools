#include<iostream>
using namespace std;
int main(){

    int a[9];
    cout<<"Give 10 integers as input"<<endl;
    for(int i=0;i<10;i++){
        cin>>a[i];
    }
    cout<<"The 10 given input are:"<<endl;
    for(int i=9;i>=0;i--){
     cout<<a[i]<<" ";
    }
    return 0;
}