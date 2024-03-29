
// CPP program to find mean and median of
// an array
#include <bits/stdc++.h>
using namespace std;
 
// Function for calculating mean
double findMean(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i];
 
    return (double)sum / (double)n;
}
 
// Function for calculating median
double findMedian(int a[], int n)
{
    // First we sort the array
    sort(a, a + n);
 
    // check for even case
    if (n % 2 != 0)
        return (double)a[n / 2];
 
    return (double)(a[(n - 1) / 2] + a[n / 2]) / 2.0;
}
 
// Driver code
int main()
{
        int i;
    int a[i];

    cin>>a[i];
    int N = sizeof(a[i]) / sizeof(a[0]);
   
    // Function call
    cout << "Mean = " << findMean(a, N) << endl;
    cout << "Median = " << findMedian(a, N) << endl;
    return 0;
}