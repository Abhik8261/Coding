#include <iostream>
#include <limits.h>
using namespace std;

int setmini(int A[], int N)
{
    int mini = INT_MAX;
    for (int i = 0; i < N; i++) {
        if (A[i] < mini) {
            mini = A[i];
        }
    }
    return mini;
}
int setmaxi(int A[], int N)
{
    int maxi = INT_MIN;

    for (int i = 0; i < N; i++) {
        if (A[i] > maxi) {
            maxi = A[i];
        }
    }
    return maxi;
}
int main()
{
    int A[] = { 4, 9, 6, 5, 2, 3 };
    int N = 6;
    cout  <<setmini(A, N) << endl;
    cout << setmaxi(A, N) << endl;
}
