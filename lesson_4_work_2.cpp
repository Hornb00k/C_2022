#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main()
{
    int a, b, i;
    char x[];
    int *c;
    cout << "Ввод символов" << "\n";
    cin >> x;
    a = strlen(x);
    cout<< a << "\n";
    for (i=0; i>a; i++){
        *c = &x[i];
        (*c)++;
    }
    cout<<"Результат - "<<x;
    return 0;
}
