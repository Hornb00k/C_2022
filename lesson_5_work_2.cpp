#include <iostream>

using namespace std;

void Sort(int massive[])
{
  for (int i=0; i<10-1; i++)
  {
    for (int k=i+1; k<10; k++)
    {
      if (massive[i]<massive[k])
      {
        int a=massive[k];
        massive[k]=massive[i];
        massive[i]=a;
      }
    }
  }
}

int main()
{
  int massive[10];
  cout<<"Введите массив из 10 чисел"<<'\n';
  for (int i=0; i<10; i++)
  {
    cout<<" ";
    cin>>massive[i];
  }
  Sort(massive);
  for (int k=0; k<10; k++)
  {
    cout<<massive[k]<<' ';
  }
  cout<<'\n';
  return 0;
}
