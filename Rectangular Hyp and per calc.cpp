#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a,b;
    double hyp, per;
    cout<<"Give values for a and b: "<< endl;
    cin >> a >> b;
    hyp = sqrt(pow(a,2) + pow(b,2));
    per = a + b + hyp;

    cout <<"Hypotenuse is: "<< hyp << endl;
    cout <<"Perimeter is: "<< per << endl;

    return 0;
}