#include<iostream>
#include<string.h>
using namespace std;
int main()
{
  char s1[80];
  char s2[80];
  cout<<"enter string 1:\n";
  cin.getline(s1,80);
  cout<<"enter string 2:\n";
  cin.getline(s2,80);
  cout<<"concatenated string is:\n"<<strcat(s1,s2);
  return 0;

}
