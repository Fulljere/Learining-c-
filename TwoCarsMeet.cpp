#include <iostream>
using namespace std;
int main(){
    const int distance = 100;
    int v1,v2;
    double time;
    cout <<"Give the speeds for the first and the second car: "<<endl;
    cin>>v1>>v2;
    time = distance/(double)(v1+v2) * 60;
    cout<<"The time needed for the cars to meet "<<time<<" minutes"<< endl;


    return 0;
}