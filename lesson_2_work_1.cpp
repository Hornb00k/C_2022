#include <iostream>

using namespace std;

int main()
{
    int a;
    while (a<100){
        if (a % 3 == 0) {
            cout<< "Число делиться на 3: "<< a << "\n";
        }
        a++;
    }


    return 0;
}
