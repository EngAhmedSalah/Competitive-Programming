#include "bits/stdc++.h"
#define watch(x) cout<<(#x)<<"  is "<<(x)<<"\n"
using namespace std;
int SD(){int i; scanf("%d" , &i); return i;}
int main()
{
    int c = 1 , n;
    while(scanf("%d" , &n) && n)
    {
        int cnt = 0;
        for(int i = 0 ; i < n ; ++i)
            cnt+=(!SD());
        printf("Case %d: %d\n"  , c++, n - cnt - cnt);


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
