#include <iostream>

using namespace std;

int factorial(int n){
    if (n<0){
        return -1;
     }
     if (n==1 || n==0){
      return 1;
     }
     else{
        double fact;
        fact = n*factorial(n-1);
        return fact;
     }
}

int main(){
    int n;
    cout <<"Type a number wich you want to calculate the factorial: "<<endl;
    cin >> n;
    int result;
    result = factorial(n);
cout <<"The number is equal to:"<<result;

return 0;
}