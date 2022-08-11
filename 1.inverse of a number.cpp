#include <iostream>

using namespace std;

int main() {
    int n = 81456273;
    int arr[100] = {0};
    bool on = true;
    int count = 1;
    while(on)
    {
        arr[n%10]=count;
        count++;
        n/=10;
        if (n==0)
        on = false;
    }
    
    for (int i=count-1 ; i>0;i--)
    cout<< arr[i];
}
