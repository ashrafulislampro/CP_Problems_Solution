#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
    char id[20];
    char name[50];
    double cgpa;
};

void merge(struct Student arr[], int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;

    struct Student *L = (struct Student *)malloc(n1 * sizeof(struct Student));
    struct Student *R = (struct Student *)malloc(n2 * sizeof(struct Student));

    // Copy data to L[]
    for (int i = 0; i < n1; i++)
    {
        L[i] = arr[left + i];  // struct copy (valid in C)
    }

    // Copy data to R[]
    for (int i = 0; i < n2; i++)
    {
        R[i] = arr[mid + i + 1];
    }

    int l = 0, r = 0, k = left;

    while (l < n1 && r < n2)
    {
        int cmp = strcmp(L[l].name, R[r].name);

        if (cmp == 0)
        {
            // same name → higher cgpa first
            if (L[l].cgpa > R[r].cgpa)
            {
                arr[k++] = L[l++];
            }
            else
            {
                arr[k++] = R[r++];
            }
        }
        else if (cmp < 0)
        {
            arr[k++] = L[l++];
        }
        else
        {
            arr[k++] = R[r++];
        }
    }

    // Remaining elements
    while (l < n1)
    {
        arr[k++] = L[l++];
    }

    while (r < n2)
    {
        arr[k++] = R[r++];
    }

    free(L);
    free(R);
}

void merge_sort(struct Student arr[], int l, int r)
{
    if (l >= r)
        return;

    int mid = (l + r) / 2;

    merge_sort(arr, l, mid);
    merge_sort(arr, mid + 1, r);
    merge(arr, l, mid, r);
}

void solve()
{
    int n;
    scanf("%d", &n);

    struct Student *arr = (struct Student *)malloc(n * sizeof(struct Student));

    for (int i = 0; i < n; i++)
    {
        scanf("%s %s %lf", arr[i].id, arr[i].name, &arr[i].cgpa);
    }

    // Sorting
    merge_sort(arr, 0, n - 1);

    // Output
    for (int i = 0; i < n; i++)
    {
        printf("%s %s %.2lf\n", arr[i].id, arr[i].name, arr[i].cgpa);
    }

    free(arr);
}

int main()
{
    solve();
    return 0;
}