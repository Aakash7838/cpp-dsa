#include<iostream>
#include<conio.h>
using namespace std;
int main(){

    int n;
    cout<<"enter n"<<endl;
    cin>>n;

    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++){
            cout<<(char)(i+64)<< " ";
        }
        cout<<endl;
    }
    
}