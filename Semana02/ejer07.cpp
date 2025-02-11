#include<iostream>
#include<string>
#include<vector>
using namespace std; 
int main(){
    int a[5];
    int b[]={5,8,7,9};

    vector<int> va;    
    va.push_back(8);
    va.push_back(9);
    va.push_back(5);
    va.push_back(3);

    for(int r:va){
        cout<<r<<" ";
    }
return 0;
}