#include "bits/stdc++.h"
using namespace std;
typedef long long lld;
#define watch(x) cout<<(#x)<<" is "<<(x)<<"\n"
int SD(){int i; scanf("%d" , &i); return i;}
lld SLL(){lld i; scanf("%lld" , &i); return i;}
const int AKA = 1e6+6;
string s[4] = {"Happy" , "birthday" , "to" , "you"} , p[101];
int main()
{
    int n, song = 0;
    cin>>n;
    for(int i = 0 ; i < n ; ++i)
        cin>>p[i];
    for(int i = 0 ; i < n ; ++i)
    {
        ++song;
        if(song == 12)
            cout<<p[i % n]<<": "<<"Rujia"<<"\n";
        else
            cout<<p[i % n]<<": "<<s[i % 4]<<"\n";
        song %=16;
    }
    for(int i = song % 16 , j=0 ; i < 16 ; ++i , ++j)
    {
        ++song;
        if(song == 12)
            cout<<p[j % n]<<": "<<"Rujia"<<"\n";
        else
            cout<<p[j % n]<<": "<<s[i % 4]<<"\n";
        song %=16;
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