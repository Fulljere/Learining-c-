#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a,b,c;
    double perimeter;
    double hyp;
    char type;

    cout<<"THIS IS ANOTHER BEGINNER LEVEL PROJECT MADE"<<endl;
    cout <<"Chose perimeter or hyp. to calculate: p/P or h/H: "<<'\n';
    cin >> type;
    if(type == 'p' || type == 'P'){
        cout <<"Enter values for a and b: "<<'\n';
        cin >> a >> b;
        perimeter= a+b;
        cout<<"The perimeter of the triangle is: "<< perimeter <<endl;
        c =0;
    }
    else if (type == 'h' || type == ' H'){
        cout <<"Values for a and b: "<<'\n';
        cin >> a >> b;
        hyp= sqrt(a*a+b*b);
        cout<<"The hypotenuse of the triangle is: "<<hyp<<endl;
    }
    return 0;
}