#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int main()
{
  
  long long days,minPass,passPrice;
  long long ifDailyfare=0;
  cin >> days >> minPass >> passPrice;

  vector<long long> fares;

  long long totalPrice=0;
  for(long long i=0 ; i<days ; i++)
  {
    long long temp ;
    cin >> temp;
    fares.push_back(temp);
  }

  sort(fares.begin(),fares.end(),greater<int>());

  for(long long i=0 ; i<=days-minPass ; i+= minPass)
  {
    ifDailyfare=0;
    //cout << "iteration 1" << endl;
    for(long long j=i ; j < min(i + minPass, days) ; j++)
    {
      //cout << "adding value = " << fares[j] <<endl;
      ifDailyfare += fares[j];
    }

    //cout << "if Daily fare price = " << ifDailyfare << endl;
    if(ifDailyfare < passPrice)
      totalPrice += ifDailyfare;
    else
      totalPrice += passPrice;
  }
  for (int i = (days / minPass) * minPass; i < days; i++) {
        totalPrice += fares[i];
    }
  cout << totalPrice <<endl;
}