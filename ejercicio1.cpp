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
    cout<<"la suma de los numeros los cuales estan ubicados por encima de la diagonal principal es: "<<s<<endl;
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matriz[i][j];
        }
        cout<<"\n";
     }
    return 0;
}