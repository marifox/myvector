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
    
    double get(int n) { return elem[n]; }
    void _set(int n, double v) { elem[n] = v; }
};


