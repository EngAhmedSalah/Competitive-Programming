#include "bits/stdc++.h"
using namespace std;
typedef long long lld;
#define watch(x) cout<<(#x)<<" is "<<(x)<<"\n"
const int AKA = 1e6+6;
char s[AKA];
int SD(){int i; scanf("%d" , &i); return i;}
lld SLL(){lld i; scanf("%lld" , &i); return i;}
int sumDig(int n)
{
    int sum = 0;
    while(n)
    {
        sum +=(n%10);
        n/=10;
    }
    return sum;
}
int main()
{
   int t = SD() , c = 1;
   while(t--)
   {
       int n = SD()-1 , mx = 0 , mn = 0 , cur = SD();
       while(n--)
       {
           int val = SD();
           mx +=(val > cur) , mn+=(val < cur) , cur = val;
       }
       printf("Case %d: %d %d\n" , c++ , mx , mn);
   }
}
/*
                                       ???????????????????????????
                                       ???????????????????????????
                                       ???????????????????????????
                                       ???????????????????????????
                                       ???????????????????????????
                                       ???????????????????????????
                                       ???????????????????????????
                                       ???????????????????????????
                                       ???????????????????????????
                                       ???????????????????????????
                                       ???????????????????????????
                                       ???????????????????????????
                                       ???????????????????????????
                                       ???????????????????????????
                                       ???????????????????????????
                                       ???????????????????????????
                                       ???????????????????????????
                                       ???????????????????????????
                                       ???????????????????????????

                         ??????????Ahmed_Salah(ScreamingEagle)??????????
*/
