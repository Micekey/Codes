#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n = 576;
    int base = 2;
    int new_number = 0;
    int loop = 0;
    while(n>=base)
    {
        new_number = new_number+pow(10,loop)*(n%base);
        loop++;
        n=n/base;
    }
    new_number+=pow(10,loop)*n;
    cout << new_number;
}
