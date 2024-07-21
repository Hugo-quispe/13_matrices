#include<iostream>
using namespace std;
int main(){
    int n,s=0;
    cout<<"ingrese el orden de la matriz: ";cin>>n;
    int matriz[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"ingrese los valores de las posiciones ["<<i+1<<"]"<<"["<<j+1<<"]:";cin>>matriz[i][j];
            if(i<j){
                s=s+matriz[i][j];
            }
        }
    }
    cout<<s;
    return 0;
}