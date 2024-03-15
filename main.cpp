#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double d, h, angle,height;
    cout<<"enter distance d in inches: ";
    cin>>d;
    cout<<endl;

    cout<<"enter distance d in feet: "<<d/12;
    cout<<endl;


    cout<<"enter height h in inches: ";
    cin>>h;
    cout<<endl;

    cout<<"enter angle in degrees: ";
    cin>>angle;
    cout<<endl;

    height = h + d*tan(angle);
    cout<<"height of the tree in inches is: "<<height<<endl;
    cout<<"height of the tree in feet is: "<<height/12<<endl;
    return 0;
}
