#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int a, b;
    ofstream r2d2("c3po");
    cout<<"Введите A и B (А<B)";
    cin>>a>>b;
    for(a;a<b;a++){
        r2d2<<(a*3)<<"\n";
    }
    r2d2.close();    
   return 0;
}
