//program to calculate total and average sales made on two days//
#include<iostream>
using namespace std;
int main()
{
  int size=2,i;
  float sales[size], avg=0, total=0;
  for(i=0;i<size;i++)
  {
    cout<<"enter sales made on day"<<i+1;
    cin>>sales[i];
    total+=sales[i];
  }
  avg=total/size;
  cout<<"\n total sales="<<total;
  cout<<"\n average sales"<<avg;
  return 0;
}
