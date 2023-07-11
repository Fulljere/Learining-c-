#include <iostream>

using namespace std;

int main()
{
    char op;
    double result;
    int a,b;
    cout <<"CALCULATOR TEST MADE BY FULJERE AKA DENIS!"<<'\n';
    cout <<"Enter values for a and b: ";
    cin >> a >> b;
    cout <<"Enter the operation you would like to do: +/-/*/ /"<<'\n';
    cin >> op;
   switch(op){
    case '+':
    result = a + b;
    cout << "The sum of  the two numbers is: "<< result <<'\n';
    break;
    case '-':
    result =  a -b;
    cout <<"The difference between the two numbers is: "<< result <<'\n';
    break;
    case '*':
    result = a*b;
    cout <<"The product of the two numbers is: "<< result << '\n';
    break;
    case '/':
    result = a/(double)b;
    cout <<"The quotient of the two numbers is: "<< result <<'\n';
    break;
    default:
    cout <<"Invalid operation!"<<'\n';
    break;
   }

    return 0;
}