#include <iostream>

using namespace std;

class vedro{
    //
    public:
        int volume;
        int used;
        float flush(){
            return used = 0;
        }
        float fill(int v){
            if (volume > v + used){
                volume = used + v;
                used = volume;
                return 0;
            } else {
                v = v + used - volume;
                used = volume;
                return v;
            }
        }
        vedro (int a, int b){
            volume = a;
            used = b;
        }
};

int main()
{
    vedro bucket(12, 3);
    cout << "1)" << bucket.volume << ',' << bucket.used << "\n";
    int rest = bucket.fill(14);
    cout << "2)" << bucket.used << ',' << rest << "\n";
    bucket.flush();
    rest = bucket.fill(8);
    cout << "3)" << bucket.used << ',' << rest << "\n";
    return 0;
}
