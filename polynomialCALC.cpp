#include <iostream>
#include <cmath>
using namespace std;
int main(){
     int a,b,c,d,x;
     cout <<"Please introduce the polynomial a,b,c,d" << endl;
     cin >> a >> b >> c >> d;
     cout <<"Introduce the x number" << endl;
    cin >> x;
    double poly;
    poly = a*pow(x,3)+b*pow(x,2)+c*pow(x,1)+d;
    cout <<"The value of the polynomial is "<<poly<<endl;

    return 0;
}