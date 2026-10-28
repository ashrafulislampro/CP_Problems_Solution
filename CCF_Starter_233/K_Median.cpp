#include <bits/stdc++.h>
using namespace std;

vector<long long> possibleMedians(vector<long long> &A, int N, int K)
{
    sort(A.begin(), A.end());
    int M = N - K;
    int medianIndex = (M + 1) / 2; // ceil(M/2)
    vector<long long> result;
    for (int i = medianIndex - 1; i <= medianIndex - 1 + K; i++)
    {
        result.push_back(A[i]);
    }
    return result;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
    {
        int N, K;
        cin >> N >> K;
        vector<long long> A(N);
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        vector<long long> res = possibleMedians(A, N, K);
        if (*res.begin() == *res.rbegin())
        {
            cout << *res.begin() << endl;
            continue;
        }
        for (int i = 0; i < res.size(); i++)
        {
            cout << res[i] << (i + 1 == res.size() ? '\n' : ' ');
        }
    }
    return 0;
}
