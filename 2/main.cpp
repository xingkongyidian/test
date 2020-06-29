#include <iostream>
#include <vector>
#include <string>
using namespace std;
int a[20005];


int main()
{
    int N , M ;
    cin >> N >> M ;
    for(int i=0; i<M ;i ++)
        cin >> a[i] ;
    int res = 1 ;
    for(int i=0; i<M ;i++ )
    {
        res *= 2 ;
        if(res >= N)
            break ;
    }
    if(res >= N)
        cout << N << endl ;
    else
        cout << res << endl ;
    return 0;
}
