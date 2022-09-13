#include <iostream>
#include<cmath>

using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    
    //write your code here
    int n_copy = n ;
    int count = 0 ;
    
    while(n_copy!=0)
    {
        n_copy=n_copy/10;
        count++;
    }
    
    k = k%count;
    
    if (k>=0)
    {   
        k = k%count;
        int div = pow(10,k);
        if (n%div != 0 )
        cout << n%div << n/div;
        else
        cout << n/div;
        
    }    
    else
    {
        k = k + count;
        int div = pow(10,k);
        if (n%div != 0)
        cout << n%div << n/div;
        else
        cout << n/div;
    }

}
