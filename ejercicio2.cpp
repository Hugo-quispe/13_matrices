#include<iostream>
using namespace std;
int main(){
    int n,s=0;
    cout<<"ingrese el orden de la matriz: ";cin>>n;
    int matriz[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"ingrese en numero de la posicion ["<<i+1<<"]["<<j+1<<"]: ";cin>>matriz[i][j];
            if(i>j){
                s=s+matriz[i][j];
            }
        }
    }
    cout<<"la suma de los numeros pertenecientes a la parte inferior de la diagonal principal es: "<<s<<endl;
    cout<<"matriz generada: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matriz[i][j];
        }
        cout<<"\n";
    }
}