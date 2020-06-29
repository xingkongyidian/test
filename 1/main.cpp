
#include <iostream>
#include <vector>
#include <numeric>
#include <limits>

using namespace std;
const int N = 1e5+3 ;
int a[N] , b[N];

int main()
{
    int T , n ;
    for (int i=1; i<=100000; i++)
         a[i] = i ;
    cin >> T ;
    while(T--)
    {
        cin >> n ;
        int Count1 = 0, Count2 =0 ;
        for (int i=1; i<=n; i++)
        {
            cin >> b[i] ;
        }
        for (int i=1; i<=n ;i ++)
        {
            if (b[i] == i)
                Count1 ++ ;
        }
        for (int i=1; i<n ;i ++)
        {
            if (b[i] >b[i+1])
                Count2 ++ ;
        }
        if (Count1+Count2 >= n-1)
            cout << "Yes"<<endl ;
        else
            cout <<"No" << endl ;
    }
    return 0 ;
}
