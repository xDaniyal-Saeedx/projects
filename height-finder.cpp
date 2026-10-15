#include<iostream>
using namespace std;
#include <cmath>
float height(float a,float b);
int main() {
    float a,b;
    cout<<"Enter the value of base(in meters): ";
    cin>>a;
    cout<<"angle of elevation(in degrees): ";
    cin>>b;
   float c = height(a,b);
   cout << "height of tree in meters is: " << c << endl;
    return 0;
}
float height(float a,float b) {
    b = b/57.2958;
    return a * tan(b);
}
