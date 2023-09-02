#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int count=10;
    vector<int> bags = {9092,12,3,12,333,1};
    
    sort(bags.begin() , bags.end());
    int x= 10;
    auto y = &x; 
    cout << typeid(y).name();

    //for(int i=0 ; i<bags.size() ; i++)
      //  cout << bags[i] << " ";    
}