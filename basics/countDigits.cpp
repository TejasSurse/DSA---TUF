#include<iostream>
using namespace std;

void countDigit(int n){
    int digit = n;
    int count = 0;
    while(digit > 0){
        digit = digit / 10;
        count++;
    }

    cout<<"Count is "<<count<<endl;
}

int main(){
    int n;
    cout<<"Enter Numeber -> ";
    cin>>n;
    cout<<endl;

    countDigit(n);

}