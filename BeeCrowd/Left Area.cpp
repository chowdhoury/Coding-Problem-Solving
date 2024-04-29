#include<bits/stdc++.h>
using namespace std;
int main()
{
    char p;
    cin >> p;
    double n[12][12],sum;
    for(int i=0;i<12;i++)
    {
        for(int j=0;j<12;j++)
        {
            cin >> n[i][j];
            if(j < (11 - i) && j < i){
                 sum += n[i][j];
            }
        }
    }

    if(p == 'S')
         printf("%.1f\n", sum);
    else
         printf("%.1f\n", sum/30.0);
    return 0;
}
