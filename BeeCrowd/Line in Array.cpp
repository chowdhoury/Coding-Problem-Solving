#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    char p;
    cin >> p;
    double n[12][12],sum=0;
    for(int i=0;i<12;i++)
    {
        for(int j=0;j<12;j++)
        {
            cin >> n[i][j];
            if(i==a) sum+=n[i][j];
        }
    }

    if(p=='S') printf("%.1lf\n",sum);
    else printf("%.1lf\n",sum/12.0);
    return 0;
}
