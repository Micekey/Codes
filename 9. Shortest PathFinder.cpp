#include <bits/stdc++.h>
using namespace std;

int main(){

   char route;
   int x=0;
   int y=0;
   while(route!='\n') {
      route = cin.get(); 
      switch(route) {
         case 'N': y++;
         break;
         case 'S': y--;
         break;
         case 'E': x++;
         break;
         case 'W': x--;
         break;
      }
   }
   cout << "Current Position: " << "<" << x << "," << y << ">" << endl;
   
   if (x>=0 and y>=0) {
        while(x--)
            cout << 'E';
        while(y--)
            cout << 'N';
   }
   else if (x>=0 and y<=0) {
        while(x--)
            cout << 'E';
        while(y++)
            cout << 'S';
   }
   else if (x<=0 and y<=0) {
        while(x++)
            cout << 'W';
        while(y++)
            cout << 'S';
   }
   else if (x<=0 and y>=0) {
        while(x++)
            cout << 'W';
        while(y--)
            cout << 'N';
   }
   }
   
