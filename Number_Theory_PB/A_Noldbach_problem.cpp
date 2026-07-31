#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, k;
    if (!(cin >> n >> k))
        return 0;

    // Step 1: Find primes up to n using a simple sieve or check
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int p = 2; p * p <= n; p++)
    {
        if (is_prime[p])
        {
            for (int i = p * p; i <= n; i += p)
                is_prime[i] = false;
        }
    }

    vector<int> primes;
    for (int i = 2; i <= n; i++)
    {
        if (is_prime[i])
            primes.push_back(i);
    }

    // Step 2: Check Noldbach condition
    int count = 0;
    for (size_t i = 0; i < primes.size() - 1; i++)
    {
        int sum = primes[i] + primes[i + 1] + 1;
        if (sum <= n && is_prime[sum])
        {
            count++;
        }
    }

    // Step 3: Output YES or NO
    if (count >= k)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}

// https://codeforces.com/problemset/problem/17/A