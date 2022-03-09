#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a;
    string z[10]={
        "ноль", "один","два","три","четыре",
        "пять","шесть","семь","восемь","девять"
    };
    cout<<"Введите число";
    cin>>a;
    cout<<z[a];
    return 0;
}
