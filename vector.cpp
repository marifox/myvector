#include <iostream>

using namespace std;

class myvector {
    int sz;
    double* elem;
public:
    myvector(int s) :
        sz{s},
        elem{new double[s]}
        {
            for(int i = 0; i < s; i++) {
                elem[i] = 0;
            }
        }
    ~myvector() { delete[] elem; }

    int sizze() const { return sz; }
};
int main()
{
    cout << sizeof( int) << endl;
    return 0;
}

