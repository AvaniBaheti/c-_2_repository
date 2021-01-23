#include<iostream>
using namespace std;
int main()
{
  const int size=3;
  float sales[size], avg=0, total=0;
  for(int i=0; i<size;i++)
  {
    cout<<"enter sales made on day"<<i+1;
    cin>>sales[i];
    total+=sales[i];
  }
  avg=total/size;
  cout<<"total sales= \n"<<total;
  cout<<" average sales= \n"<<avg;
  return 0;
}
