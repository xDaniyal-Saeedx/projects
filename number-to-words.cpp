#include <iostream>
using namespace std;
#include <cmath>
string number(int a);

int main()
{
    while (true)
    {
        int a;
        cout << "Enter a number: ";
        cin >> a;
        cout << number(a) << endl;
    }
}

string number(int a)
{   
    int first = a % 10;
    int second = (a / 10) % 10;
    string b[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    string c[] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    string d[] = {"", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    if (first == 0 and second == 0)
    {
        return "zero";
    }
    else if ((first > 0 and first < 10) and (second == 0))
    {
        return b[first - 1] ;
    }
    else if ((first >= 0 and first < 10) and (second == 1))
    {
        return c[first] ;
    }
      else if(a%10==0){
        return d[second - 1] ;

    }

    else if ((first >= 0 and first < 10) and (second > 1))
    {
        return d[second - 1] + "-" + b[first-1] ;
    }
  
}
