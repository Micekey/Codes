#include <iostream>
#include <cmath>

using namespace std;

// ***************************************   Solution 1   ***********************************************

int main() {
    int n = 81456273;
    int arr[100] = {0};
    int count = 1;
    while(n!=0)
    {
        arr[n%10]=count;
        count++;
        n/=10;
    }
    
    for (int i=count-1 ; i>0;i--)
    cout<< arr[i];
    
    return 0;
}


// ***************************************   Solution 2   ***********************************************

int main() {
    int n = 81456273;
    int que = 0;
    int number = 0;
    int counter = 1;
    while(n!=0)
    {
        que = n%10;
        number = number+counter*pow(10, que-1);
        counter++;
        n/=10;
    }
    cout << number ;
    
    return 0;
}
