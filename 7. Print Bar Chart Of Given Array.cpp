#include <iostream>

using namespace std;

int main() {
    int l;
    cin >> l;
    int arr[l];
    
    for (int i=0; i<l; i++)
    cin >> arr[i];
    
    int max = arr[0];
    
    for (int i=0; i<l; i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }
    
    for (int j=max; j>=1; j--)
    {
        for (int i=0; i<l; i++)
        {
            if (arr[i]==max)
            {
                cout << "*";
                arr[i]-=1;
            }    
            else
            cout << " ";
        }
        cout << endl;
        
        max--;
    }    
}
