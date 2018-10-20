#include <task1.h>
#include <vector>

unsigned long long sumPrime(unsigned int hbound){
    vector <char> a;
    unsigned long long  len = hbound, s = 0;
    for (unsigned long long i = 0; i < len + 1; i++)
        a.push_back(true);
    a[0] = a[1] = false;
    for (unsigned long long p = 2; p < len + 1; p++)
    {
        if (a[p])
        {
            s = s + p;
            for (unsigned long long j = p*p; j < len + 1; j += p)
                a[j] = 0;
        }
    }
    return s;
}
