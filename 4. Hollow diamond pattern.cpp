#include <iostream>

using namespace std;

int main() {
    int n = 31;
    int space=1;
    int st=(n+2)/2;
    for (int i=1; i<=n; i++)
    {
        for (int a=1; a<=st; a++)
        cout << "*";
        
        for (int a=1; a<=space; a++)
        cout << " ";
        
        for (int a=1; a<=st; a++)
        cout << "*";
        cout << endl;
        
        if(i<=n/2)
        {st--;
        space+=2;}
        else
        {st++;
        space-=2;}
    }
}
