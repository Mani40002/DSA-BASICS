#include "iostream"
using namespace std;
int isprime(int n)
{
    bool ans = true;
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            ans = false;
        }
    }
    return ans;
}
int main()
{
    // int n;
    // cin>>n;
    cout << "Ans : " << isprime(104);
    cout << endl;
    cout << "Ans : " << isprime(105);
    cout << endl;
    cout << "Ans : " << isprime(106);
    cout << endl;
    cout << "Ans : " << isprime(118);
    cout << endl;
    cout << "Ans : " << isprime(121);
    cout << endl;
    cout << "Ans : " << isprime(131);
    cout << endl;
    cout << "Ans : " << isprime(137);
    cout << endl;
    cout << "Ans : " << isprime(139);
    cout << endl;
    cout << "Ans : " << isprime(197);
    cout << endl;
    cout << "Ans : " << isprime(199);
    cout << endl;
    cout << "Ans : " << isprime(191);
    cout << endl;
}