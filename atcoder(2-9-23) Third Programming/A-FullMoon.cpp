#include<iostream>

using namespace std;

int findMoonDays(int totalDays , int first , int incre)
{
    if(totalDays < first)
        return 0;
    

    int moonCount = 0;
    for(int i=first ; i <=totalDays ; i+=incre)
    {
        moonCount++;
    }
    return moonCount;
}

int main()
{
    int m,p,n;
    cin >> n >> m >> p;
    int result = findMoonDays(n,m,p);
    cout << result;
}