#include <iostream>
#include <stdexcept>
using namespace std;

int Division(int num, int den)
{
    if (den == 0)
    {
        throw runtime_error("**** Attempted to divide by Zero ****\n");
    }
    return (num / den);
}

int main()
{
    int a, b, result;
    printf("Enter the numerator : ");
    scanf("%d", &a);
    printf("Enter the denominator : ");
    scanf("%d", &b);
    try
    {
        result = Division(a, b);
        cout << "The quotient is " << result << endl;
    }
    catch (runtime_error &e)
    {
        cout << "Exception occurred" << endl
             << e.what();
    }
    return 0;
}