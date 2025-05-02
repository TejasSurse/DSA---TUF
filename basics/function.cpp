#include<bits/stdc++.h>
using namespace std;
// void - does not return anything
// return type function - returns a value
// parameter - takes input
// non parameter - does not take input


// pass by value 
// we pass copy here 

void doSomething(int num){
    cout<<num<<endl;
    num+= 5;
    cout<<num<<endl;
    num+=4;
    cout<<num<<endl;
}


// pass by reference
void doSomething2(int &num){
    cout<<num<<endl;
    num+= 5;
    cout<<num<<endl;
    num+=4;
}   



int main(){
    int num = 10;
    doSomething(num);
    cout<<num<<endl;
    cout<<"Do Something 2  "<<endl;
    doSomething2(num);
    cout<<num<<endl;
    return 0;
}



 

