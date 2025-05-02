#include <bits/stdc++.h>
using namespace std;
// - test cases 
void pat1(int n){
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

}


// PAT 2
void pat2(int n){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

// pat 3

void pat3(int n){
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            cout<<j;
        }
        cout<<endl;
    }
}

// pat 4

void pat4(int n){
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            cout<<i;
        }
        cout<<endl;
    }
}
// pat 5

void pat5(int n){
    for(int i = n; i>0; i--){
        for(int j = 1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

// or

void pat5_1(int n){
    for(int i = 0; i<=n; i++){
        for(int j = 0; j<n-i+1; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter No. of Rows : ";
    cin>>n;
    pat5_1(n);
   

    return 0; 
}