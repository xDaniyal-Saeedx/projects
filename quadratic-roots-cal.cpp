#include<iostream>
using namespace std;
#include<cmath>
int calculate(int a,int b,int c);
int main()
{   
    cout<<"quadratic equation: ax^2 + bx + c = 0"<<endl;
    int a,b,c;
    
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    cout<<"Enter the value of c: ";
    cin>>c;
    calculate(a,b,c);
    
    return 0;

}

int calculate(int a,int b,int c)
{   float x1,x2;
    float disc = pow(b,2) - (4*a*c);

    if(disc >= 0){
    
      x1 = (-b+sqrt(disc))/(2*a);
      x2 = (-b-sqrt(disc))/(2*a);
       cout<<"The roots of the equation are: x1= "<<x1<<" and x2= "<<x2<<endl;
    }
    else
    {
        float real = -b/(2*a);
        float imaginary = sqrt(-disc)/(2*a);
      
        cout<<"The roots of the equation are: x1= "<<real<<" + "<<imaginary<<"i and x2= "<<real<<" - "<<imaginary<<"i"<<endl;
    }
    
}
