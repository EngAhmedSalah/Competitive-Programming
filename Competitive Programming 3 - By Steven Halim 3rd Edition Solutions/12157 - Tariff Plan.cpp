#include "bits/stdc++.h"
using namespace std;
typedef long long lld;
#define watch(x) cout<<(#x)<<" is "<<(x)<<"\n"
int SD(){int i; scanf("%d" , &i); return i;}
lld SLL(){lld i; scanf("%lld" , &i); return i;}
const int AKA = 1e6+6;
string b[10];
int a[10];
int main()
{
    int t = SD(), c = 1;
    while(t--)
    {
        int n = SD() , f = 0 , s = 0;
        while(n--)
        {
            int val = SD();
            f+=ceil(((double)val+1) / 30) , s +=ceil(((double)val+1) / 60);
        }
        if(f * 10 < s * 15)
            printf("Case %d: Mile %d\n" , c++ , f * 10);
        else if(f * 10 > s * 15)
            printf("Case %d: Juice %d\n" , c++ , s * 15);
        else
            printf("Case %d: Mile Juice %d\n" , c++ , f * 10);

    }
}
/*
                                       ███████████████████████████
                                       ███████▀▀▀░░░░░░░▀▀▀███████
                                       ████▀░░░░░░░░░░░░░░░░░▀████
                                       ███│░░░░░░░░░░░░░░░░░░░│███
                                       ██▌│░░░░░░░░░░░░░░░░░░░│▐██
                                       ██░└┐░░░░░░░░░░░░░░░░░┌┘░██
                                       ██░░└┐░░░░░░░░░░░░░░░┌┘░░██
                                       ██░░┌┘▄▄▄▄▄░░░░░▄▄▄▄▄└┐░░██
                                       ██▌░│██████▌░░░▐██████│░▐██
                                       ███░│▐███▀▀░░▄░░▀▀███▌│░███
                                       ██▀─┘░░░░░░░▐█▌░░░░░░░└─▀██
                                       ██▄░░░▄▄▄▓░░▀█▀░░▓▄▄▄░░░▄██
                                       ████▄─┘██▌░░░░░░░▐██└─▄████
                                       █████░░▐█─┬┬┬┬┬┬┬─█▌░░█████
                                       ████▌░░░▀┬┼┼┼┼┼┼┼┬▀░░░▐████
                                       █████▄░░░└┴┴┴┴┴┴┴┘░░░▄█████
                                       ███████▄░░░░░░░░░░░▄███████
                                       ██████████▄▄▄▄▄▄▄██████████
                                       ███████████████████████████

                         ▂▃▄▅▆▇█▓▒░Ahmed_Salah(ScreamingEagle)░▒▓█▇▆▅▄▃▂
*/
