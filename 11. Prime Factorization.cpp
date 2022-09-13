#include <iostream>
#include<cmath>

using namespace std;
int main(){
    int n=99;
    int div = 2;
    while(div<=n)
    {
        while(n%div==0)
        {
            n=n/div;
            cout << div << endl;
        }
        div++;
    }

}
