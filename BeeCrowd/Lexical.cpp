#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[25],b[25];
    scanf("%s %s",a,b);
    if(strcmp(a,b)<0)
    {
        cout << a << endl;
        cout << b << endl;
    }else if(strcmp(a,b)>0)
    {
        cout << b << endl;
        cout << a << endl;
    }

    return 0;
}
