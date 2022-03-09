#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int a, i=0;
    char x[80];
    cout << "Ввод символов" << "\n";
    cin >> x;
    a = strlen(x);
    while (1){
    x[i]=x[i]+1;
    i++;
    if(a==i) break;
    }
    cout<<"Результат - "<<x;
    return 0;
}
