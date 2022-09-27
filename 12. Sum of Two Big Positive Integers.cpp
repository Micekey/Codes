#include<bits/stdc++.h>
using namespace std;

int chartoint(char c) {
    return c-'0';
}
    
char inttochar(int i) {
    return i+'0';
}

string findSum(string ni, string nii) {
    reverse(ni.begin(),ni.end());
    reverse(nii.begin(),nii.end());
    if (ni.length()>nii.length())
        swap(ni,nii);
    
    string result;
    int carry = 0;
    for (int i=0; i<ni.length(); i++) {
        int d1 = chartoint(ni[i]);
        int d2 = chartoint(nii[i]);
        int sum = d1+d2+carry;
        int whattoadd = sum%10;
        carry = sum/10;
        result.push_back(inttochar(whattoadd));
    }
    
    for (int i=ni.length(); i<nii.length(); i++) {
        int d2 = chartoint(nii[i]);
        int sum = d2+carry;
        int whattoadd = sum%10;
        carry = sum/10;
        result.push_back(inttochar(whattoadd));
    }
    
    if (carry)
        result.push_back(inttochar(carry));

    reverse(result.begin(),result.end());
    return result;
    
}

int main() {
    string ni =  "8734875934923492349827349882349729437237498327492734862958243687365873648934923749873472374983274897239479237324972374983274982734987234728";
    string nii = "634598729479247923492741845098240280389247524850284972498759847982394723874327498324987234987923749823749827347987324982739847";
    cout << findSum(ni,nii);
    return 0;
}
