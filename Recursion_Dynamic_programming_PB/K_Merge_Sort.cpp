#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int cmp = 0;
void Merge(int *A, int left, int mid, int right)
{

    int n1 = mid - left;
    int n2 = right - mid;

    int L[n1 + 1], R[n2 + 1];
    // copy tmp data
    for (int i = 0; i < n1; i++)
        L[i] = A[left + i];
    for (int i = 0; i < n2; i++)
        R[i] = A[mid + i];

    L[n1] = 1e9;
    R[n2] = 1e9;
    int i = 0, j = 0;

    // Merge Aay
    for (int k = left; k < right; k++)
    {
        cmp++;
        if (L[i] <= R[j])
        {
            A[k] = L[i];
            i = i + 1;
        }
        else
        {
            A[k] = R[j];
            j = j + 1;
        }
    }
}
void Merge_Sort(int *A, int left, int right)
{
    if (left + 1 < right)
    {
        int mid = (right + left) / 2;
        Merge_Sort(A, left, mid);
        Merge_Sort(A, mid, right);
        Merge(A, left, mid, right);
    }
}

int main()
{
    int n;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
        cin >> A[i];

    Merge_Sort(A, 0, n);
    // after sorting the Aay
    for (int i = 0; i < n; i++)
    {
        cout << A[i];
        if (i < n - 1)
            cout << ' ';
        else
            cout << '\n';
    }
    cout << cmp << '\n';
    return 0;
}