#include <iostream>
#include <string>
using namespace std;

string compress(string str) {
    int n = str.length();
    string output;
    for (int i=0; i<n; i++) {
        int count=1;
        while(i<n and str[i]==str[i+1]) {
            count++;
            i++;
        }
        output += str[i];
        output += to_string(count);
    }
    if (output.length()<n)
        return output;
    else
        return str;
}

int main() {
    string a;
    getline(cin,a);
    cout << compress(a);
    return 0;
}
