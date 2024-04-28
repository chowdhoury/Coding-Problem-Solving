#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    while(cin >> a >> b >> c)
    {
        if((a+b+c)==0 || (a+b+c)==3) cout << '*' << endl;
        else if((a+b+c)==2 && a==0) cout << 'A' << endl;
        else if((a+b+c)==2 && b==0) cout << 'B' << endl;
        else if((a+b+c)==2 && c==0) cout << 'C' << endl;
        else if((a+b+c)==1 && a==1) cout << 'A' << endl;
        else if((a+b+c)==1 && b==1) cout << 'B' << endl;
        else if((a+b+c)==1 && c==1) cout << 'C' << endl;
    }
    return 0;
}
