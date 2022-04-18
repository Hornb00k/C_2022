#include <iostream>

using namespace std ;

void SquaredSum();

int main ()
{
    SquaredSum();    
}

void SquaredSum()
{
    float a,b,result;
    cout<<"Введите первое дробное число\n";
    cin>>a;
    cout<<"Введите второе дробное число\n";
    cin>>b;
    result=(a+b)*(a+b);
    cout<<"Результат - "<<result<<"\n";
}
