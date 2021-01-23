#include<iostream>
using namespace std;
int main()
{
  int a[10],i,n;
  cout<<"enter size of array (<10):";
  cin>>n;
  cout<<"enter elements of array:";
  for(i=0;i<n;i++)
  cin>>a[i];
  cout<<"reversed array is:";
  for(i=(n-1);i>=0;i--)
  cout<<a[i];

  return 0;
}
