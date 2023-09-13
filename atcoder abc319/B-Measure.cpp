#include<iostream>
#include<math.h>
#include<vector>
#include<string>

using namespace std;

char convertToChar(int target){
    if(target == 1)
    {
        return '1';
    }
    else if(target == 2)
    {
        return '2';
    }
    else if(target == 3)
    {
        return '3';
    }
    else if(target == 4)
    {
        return '4';
    }
    else if(target == 5)
    {
        return '5';
    }
    else if(target == 6)
    {
        return '6';
    }
    else if(target == 7)
    {
        return '7';
    }
    else if(target == 8)
    {
        return '8';
    }
    else if(target == 9)
    {
        return '9';
    }
}

void calString(int len){
    vector<int> factors1to9;
    string res="1";
    for(int i=1 ; i<=9 ; i++)
    {
        if(len % i == 0)
        {
            factors1to9.push_back(i);
        }
    }

    bool found = false;
    for(int i=1 ; i<=len ; i++)
    {
        //cout << "iteration " << i << endl;
        found = false;
        for(int j=0; j<factors1to9.size() ; j++)
        {
            //cout << "len/factors[j] = "<< len/factors1to9[j] <<endl;
            if((len/factors1to9[j]) <= i && i%(len/factors1to9[j]) == 0)
            {
                found = true;
                res.push_back(convertToChar(factors1to9[j]));
                //cout <<"pushing "<< convertToChar(factors1to9[j]) << endl;
                break;
            }   
        }
        if(found == false)
        {
            //cout << "pushing -" <<endl;
            res.push_back('-');
        }
    }

    cout << res;
}


int main()
{
    int len;
    cin >> len;
    calString(len);

}
