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
        for(int j = 1; j<n-i+1; j++){
            cout<<j;
        }
        cout<<endl;
    }
}

// pyramid 
void pat6(int n){
    for(int i = 0; i<=n; i++){
        // space 
        for(int j = 0; j<= n-i-1; j++){
            cout<<" ";
        }
        // start
        for(int j = 0; j<2*i+1; j++){
            cout<<"*";
        }
        // space
        for(int j = 0; j<= n-i-1; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}


// ulta pyramid 2*n - (2i+1);
void pat7(int n){
    for(int i = 0; i<=n; i++){
        // space 
        for(int j = 0; j<= i; j++){
            cout<<" ";
        }
        // start
        for(int j = 0; j< 2*n- (2*i + 1); j++){
            cout<<"*";
        }
        // space
        for(int j = 0; j<= i; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

// pat no. 9
void pat9(int n){
    for(int i = 0; i<=n; i++){
        // space 
        for(int j = 0; j<= n-i-1; j++){
            cout<<" ";
        }
        // start
        for(int j = 0; j<2*i+1; j++){
            cout<<"*";
        }
        // space
        for(int j = 0; j<= n-i-1; j++){
            cout<<" ";
        }
        cout<<endl;
    }
    // p2
   
    for(int i = 0; i<=n; i++){
        // space 
        for(int j = 0; j<= i; j++){
            cout<<" ";
        }
        // start
        for(int j = 0; j< 2*n- (2*i + 1); j++){
            cout<<"*";
        }
        // space
        for(int j = 0; j<= i; j++){
            cout<<" ";
        }
        cout<<endl;
    }
   

}

// desi
void pat10(int n)
{
    for(int i = 0; i<=n; i++){
        for(int j = 0; j<=i; j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
    for(int i = 0; i<=n; i++){
        for(int j = 0; j<n-i; j++)
        {
            cout<<j;
        }
        cout<<endl;
    }

}

void pat11(int n){
    int start = 1;
    for(int i = 0; i<n; i++){
        if(i %2 == 0) start = 1;
        else start = 0;
        for(int j = 0; j<=i; j++){
            cout<<start;
            start = 1-start;
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter No. of Rows : ";
    cin>>n;
    pat11(n);
    

    return 0; 
}