#include<iostream>
#include<string.h>
using namespace std;
int main()
{
  char str[80];
  int words=0;
  cout<<"enter string:\n";
  cin.getline(str,80);
  for(int i=0;i<80;i++)
   if(str[i]==' ')
   {
    words++;
   }
   cout<<"number of words=\n"<<words;
   return 0;
}
