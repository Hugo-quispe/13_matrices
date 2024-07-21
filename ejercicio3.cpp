#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ingrese el orden de la matriz: ";cin>>n;
    int matriz[n][3*n];
    for(int i=0;i<n;i++){
        for(int j=0;j<3*n;j++){
            if(i<n&&j<3*n){
                matriz[i][j]=1;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<3+n;j++){
            cout<<matriz[i][j];
        }
        cout<<"\n";
    }
}