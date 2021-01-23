#include<iostream>
#include<string.h>
using namespace std;
int main()
{
  char string[80];
  cout<<"enter string:\n";
  cin.getline(string,80);
  cout<<"length of string is:\n"<<strlen(string);
  cout<<"reverse of string is:\n"<<strrev(string);
  cout<<"the length of reversed string is:\n"<<strlen(string);
  return 0;
}
