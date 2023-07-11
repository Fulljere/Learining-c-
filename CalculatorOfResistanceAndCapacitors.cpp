#include <iostream>

using namespace std;

int main()
{   
    char op;
    cout << "Chose wich you want to calculate: 1(resitance) / 2 (capasitors)"<<'\n';
    cin >> op;
    switch(op)
    {
    case '1':
    int r1,r2; 
    cout <<"Enter values for r1 and r2: "<<'\n';
    cin >> r1 >> r2;
    int series;
    series = r1+r2;
    cout << "The series is: " << series << '\n';
    double parallel;
    parallel = (r1*r2)/(double)(r1+r2);
    cout <<"The parallel is: "<< parallel << '\n';
    break;
    case '2':
    int c1,c2;
    cout <<"Enter values for c1 and c2: "<< '\n';
    cin >> c1 >> c2;
    int series_c;
    series_c = 1/(double)c1 +1/(double)c2;
    cout <<"The series is: " << series_c << '\n';
    double parallel_c;
    parallel_c = c1 +c2 ;
    cout <<"The parallel is: "<< parallel_c << '\n';
    break;
    default:
    cout << "Wrong input!" << '\n';
    }
    return 0;
    }
