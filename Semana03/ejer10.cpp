#include<iostream>
#include<ctime>
#include<cstdlib>
#define N 5
using namespace std; 

int aletorio(int m, int M){    
    return (rand()%(M-m+1)+m);
}
void mostrar(int arr[]){
    for(int i=0;i<N;i++){
        cout<<arr[i]<<"\t";
    }
}
void llenar(int arr[]){
    for(int i=0;i<N;i++){
        arr[i]=aletorio(0,9);
    }
}
int sumar(int arr[]){
    int sum=0;
    for(int i=0;i<N;i++){
        sum+=arr[i];
    }
    cout<<"La suma es: "<<sum;
    return sum;
}
int main(){  
    int arr[N];
    srand(time(0));
    llenar(arr);
    mostrar(arr);
    sumar(arr);
    //cout<<aletorio(0,9);
return 0;
}