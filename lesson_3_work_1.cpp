#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int a, b, c, d;
    ofstream r2d2("c3po");
    cout<<"Введите A и B";
    cin>>a>>b;
    if (a>b){
        c=a;
        d=b;
        } else if (b>a){
            c=b;
            d=a;
            } else {
                cout<<"Число А равен В. Введите число заного";
            }
    for(d;d<=c;d++){
        if (c==d){
        r2d2<<(d*3);
        } else {
            r2d2<<(d*3)<<"\n";;
        }
    }
    r2d2.close();    
   return 0;
}
