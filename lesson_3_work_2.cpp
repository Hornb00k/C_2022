#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int a=1, b, c;
    ifstream r2d2("c3po");
    while (1){
    r2d2>>c;
    cout<<a<<"."<<c<<"\n";
    a++;
    if (r2d2.eof()) break;
    }
    r2d2.close();    
    return 0;
}
