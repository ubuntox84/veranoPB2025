#include<iostream>
# define N 5
using namespace std; 
int main(){
    int vec[N]={5,8,9,7,3};
    for (int i = 0; i < N; i++)
    {
        cout<<*(vec+i)<<"\t";
    }
    
    
   

return 0;
}