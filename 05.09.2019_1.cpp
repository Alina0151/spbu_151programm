#include <iostream>

using namespace std;


 long double fact(int N)
{
    if(N < 0)
        return 0;
    if (N == 0)
        return 1;
    else
        return N * fact(N - 1);
}

    int main()
{
    int n;
    cout << "write n="<< endl;
    cin >>n;
    int *a= new int[n];
    double s=0;

    for (int i=0; i<n; i++)
    {
        cin >>a[i];
        a[i]=fact(a[i]);
        cout << a[i]<< endl;
        s +=a[i];
    }
    cout<<"result="<< s/n;
    return 0;
}

