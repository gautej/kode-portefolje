#include <iostream>
#include <vector>

using namespace std;

int main(int, char **)
{
    int n;
    while (cin >> n)
    {
        cout << n << endl;

        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            if (n % i == 0)
                v.push_back(i);
        }
        int sum = 0;
        for (int i : v)
            sum += i;

        if (sum == n)
            cout << n << " perfect" << endl;
        else if (sum - 2 <= n && sum + 2 >= n)
            cout << n << " almost perfect" << endl;
        else
            cout << n << " not perfect" << endl;
    }
}
