//program to find position of an element in array//
#include<iostream>
using namespace std;
int main()
{
  int a[20],i,n,pos,flag=0,num;
  cout<<"enter number of elements";
  cin>>num;
  cout<<"enter  elements\n";
  for(i=0;i<num;++i)
  cin>>a[i];
  cout<<"enter element to be searched:\n";
  cin>>n;
  for(i=0;i<num;++i)
    if(a[i]==n)
    {
      flag=1;
      pos=i;
      break;
    }


   if(flag==0)
    cout<<"element not found";
   else
    cout<<"element found at position"<<(pos+1);

  return 0;
}
