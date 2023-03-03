#include <iostream>

using namespace std;

int factorial(int number);

int factorial(int number)
{
    if(number < 1)
    {
        return 1;
    }
    else
    {
        return number*factorial(number - 1);
    }
}

int main()
{
    int number;
    cout<<"Enter the number: "<<endl;
    cin>>number;
    cout<<"Factorial of the number is :  "<<factorial(number)<<endl;
    return 0;
}