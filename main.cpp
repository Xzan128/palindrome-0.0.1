#include <iostream>
#include <string.h>
using namespace std;
 bool palindrom(char s[]);
int main() 
{   
    char txt[100];
    cout << "Enter the string" << endl; 
    cin.getline(txt, 100);
    if(palindrom(txt))
       cout << "1" << endl;
   else
       cout << "0" << endl;
    return 0;
}
 bool palindrom(char s[])
{
   int n = strlen(s); 
   bool k =true;
   for (int i = 0;  i < n / 2; i++ )
  {
      if(s[i]!=s[n-1-i])
      {
           k=false;
           break;
      }
  }
  return k;
}
