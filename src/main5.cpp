#include <task5.h>

int main()
{
    char *buf="123,456,789";
    int N=0;
    char **result=nullptr;
    char ch = ',';

    split(&result, &N, buf, ch);
    return 0;
}