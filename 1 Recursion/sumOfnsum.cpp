#include<iostream>
using namespace std;


void sum(int n, int sumn){
    if(n == 0){
        cout<<sumn;
        return;
    }
    sumn += n;
    sum(n-1, sumn);
    
}


int main(){
    int n;
    cout<<"Enter Number"<<endl;
    cin>>n;
    int sumn = 0;
    sum(n, sumn);
    cout<<"Hello Good bOY"<<endl;

    return 0;
}