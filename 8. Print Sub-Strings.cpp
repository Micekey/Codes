#include <iostream>

using namespace std;

int main() {
    string s = "abccbc";
    
    for (int j=0; j<=s.length(); j++)
    {    
        for (int i=1; i<=s.length()-j; i++)
            cout << s.substr(j,i) << endl;
    }
    
    cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;  
    // method 2
    
    int length = s.length();
    int i=0;
    int j=1;
    int counter=0;
    while(i!=length)
    {
        // cout << i << "," << j << endl;
        for (int print=i; print<j; print++)
        {
            cout << s[print];
        }
        cout << endl;
        if (j==length)
        {
            counter++;
            i++;
            j=counter;
        }
        j++;
    }
}    
