#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int a, i=0, *ip;
    char x[80];
    cout << "Ввод символов" << "\n";
    cin >> x;
    cout<<"Результат - ";
    a = strlen(x);
    while (1){
        ip=(int *) &x[i];
        (*ip)++;
        cout<<x[i];
        if(a==i) break;
        i++;
    }
    return 0;
}
