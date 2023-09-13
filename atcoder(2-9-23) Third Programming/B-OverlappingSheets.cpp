#include<iostream>

using namespace std;

int findArea(int cords[][4],int recNum)
{
    bool graphRep[100][100] = {false};
    int count = 0;
    for(int i=0 ; i < recNum ; i++)
    {
        int a,b,c,d;
        a=cords[i][0];
        b=cords[i][1];
        c=cords[i][2];
        d=cords[i][3];

        for(int x=a; x<b ;x++)
        {
            for(int y=c; y<d ; y++)
            {
                if(graphRep[x+1][y+1] == false)
                {
                    graphRep[x+1][y+1] = true;
                    count++;
                }
                if(count == 10000)
                 return count;
            }
        }

    }
    return count;
}
int main()
{
    int recNum;
    cin >> recNum;
    int cords[recNum][4];

    for(int i=0 ; i<recNum ;i++)
    {
        cin >> cords[i][0];
        cin >> cords[i][1];
        cin >> cords[i][2];
        cin >> cords[i][3];
    }   
    int result = findArea(cords ,recNum);
    cout << result;
}