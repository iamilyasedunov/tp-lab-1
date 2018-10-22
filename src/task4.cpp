#include <task4.h>

char * sum(char *x, char *y){


    vector <char> x1,y1,z1;


    for (int i = strlen(x) - 1;i > - 1;i--){
        x1.push_back(x[i]);
    }
    for (int i = strlen(y) - 1;i > - 1;i--){
        y1.push_back(y[i]);

    }
    int n = x1.size() - y1.size();

    if (n > 0){
        for (int i = 0; i < abs(n); i++){
            y1.push_back('0');
        }
    }
    else{
        for (int i = 0; i < abs(n); i++){
            x1.push_back('0');
        }
    }
    int sum, stock = 0;
    n = x1.size();
    for (int i = 0;i < n;i++){
        int xx = int(x1[i] - 48), yy = int(y1[i] - 48);
        sum = xx + yy + stock;
        z1.push_back(char(sum%10 + 48));
        stock = sum/10;
        //cout<<x1[i]<<" "<<y1[i]<<" "<<z1[i]<<endl;
        if ((i == n - 1)&&(stock != 0)){
            z1.push_back(char(stock + 48));
            //cout<<"    "<<z1[i + 1]<<endl;
        }
    }
    char *z = (char *) malloc(sizeof(char)*(z1.size())) - 2;
    reverse(z1.begin(), z1.end());
    for (int i = 0; i < z1.size(); i++){
        z[i] = z1[i];
        //cout<<z[i]<<" ";
    }

    return z;
}