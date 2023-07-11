#include <iostream>

using namespace std;

int main()
{
  double temp;
  char unit;
  cout<<"Temperature convertor !!!!!\n";
  cout <<"f/F = Fahrenheit"<<'\n';
  cout <<"c/C = Celsius"<<'\n';
  cout<<"What unit you would like to convert to: ";
  cin>>unit;
  if(unit=='F'||unit =='f'){
    cout<<"Enter temperature in celsius: ";
    cin>>temp;
    temp = (1.8*temp)+32;
    cout<<"Temperautre in Fahrenheit is: "<< temp <<" F"<<'\n';
  }
  else if(unit == 'C'|| unit == 'c'){

    cout<<"Enter the temperature in fahrenheit: ";
    cin>>temp;
    temp=(temp-32)/1.8;
    cout<<"Temperature in Celsius is: "<< temp <<" C"<<'\n';
    }
    return 0;
}