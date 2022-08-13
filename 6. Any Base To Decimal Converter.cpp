#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n = 576;
    int base = 8;
    int new_ = 0;
    int digits=int(log10(n));
    for (int i=0; i<=digits; i++)
    {
        new_=new_+(n%10)*pow(base,i);
        n=n/10;
    }
    cout << new_;
    
}
