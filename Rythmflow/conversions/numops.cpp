#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n)
{

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
};

void PrimeNum(int n)
{

    for (int i = 2; i * i < n; i++)
    {
        if (n % i == 0)
        {
            cout << i << endl;
            cout << n << " is not a prime no" << endl;
            return;
        }
        cout << i << endl;
        cout << n << " is prime number." << endl;
        return;
    }
};

// binomal coefficent
int fact(int f)
{
    int fact = 1;
    for (int i = 1; i <= f; i++)
    {
        fact *= i;
    }

    return fact;
};

int nCr(int N, int R)
{
    int fact_n = fact(N);
    int fact_r = fact(R);
    int fact_nmr = fact(N - R);

    int res = fact_n / (fact_r * fact_nmr);
    return res;
};

int sumOfDig(int num)
{

    int digit = 0;

    while (num > 0)
    {
        digit += num % 10;
        num = num / 10;
    }
    return digit;
};

// fibonacci :: recursion
int fib(int num)
{
    if (num <= 1)
    {
        return num;
    }
    return fib(num - 1) + fib(num - 2);
}

int main()
{
    int n = 6;
    int r = 2;
    int N, R;
    int s;

    cout << "Enter a number : " << endl;
    cin >> n;
    PrimeNum(n);

    // check every number from 1 to n ;
    cout << "Enter a range to print prime number : ";
    cin >> r;
    for (int i = 1; i < r; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }
    cout << endl;

    cout << "Enter the  N and R value for binomial coefficient: ";
    cin >> N >> R;

    cout << nCr(N, R) << endl;
    ;

    cout << endl;

    // calculate sum of digit of number

    cout << "Enter the  number to calculate sum: ";
    cin >> s;

    cout << "The sum = " << sumOfDig(s) << endl;

    return 0;
}