#include<iostream>
#include<math.h>
#include<vector>
#include<string>

using namespace std;

int main()
{
    int wordNum , minLines;
    cin >> wordNum >> minLines;

    vector<int> wordSizes;
    int totalWordSize=0;
    int temp;
    for(int i=0 ; i<wordNum ; i++)
    {
        cin >> temp;
        wordSizes.push_back(temp);
        totalWordSize+=temp;
    }
    for(int i=0 ; i<wordNum ; i++)
        cout<< wordSizes[i];
    bool found = false;
    int ans;
    int spaceInLine = totalWordSize/minLines;
    while(!found)
    {
        cout << "trying with window size " << spaceInLine << endl; 
        int linesTook=1;
        int tempSpaceInLine = spaceInLine;
        for(int i=0 ; i<wordNum ; i++)
        {
            cout << tempSpaceInLine-wordSizes[i] <<endl;
            if(tempSpaceInLine-wordSizes[i] >= 0)
            {
                tempSpaceInLine-=wordSizes[i];
                cout << wordSizes[i] << " " << "remaining space in line " << tempSpaceInLine;
            }
            else
            {
                tempSpaceInLine = spaceInLine;
                linesTook++;
                cout << endl;
            }
        }
        if(linesTook <= minLines)
        {
            cout << "lines took" << linesTook <<endl ;
            found = true;
            ans=spaceInLine;
        }
        else{
            spaceInLine++;
        }
    }
    cout << ans;
}