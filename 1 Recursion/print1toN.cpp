#include<iostream>
using namespace std;
void print(int i, int n){
    if(n == 0){
        return;
    }
    cout<<i<<" ";
    i += 1;
    n -= 1;
    print(i, n);
}
void printNos(int n) {
    int i = 1;
    print(i, n);
    
}

int main(){
    int n; 
    cout<<"Enter n"<<endl;
    cin>>n;
    printNos(n);
}