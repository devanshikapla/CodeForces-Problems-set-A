#include <iostream>
#include <cstring>
#include <unordered_set>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
  string s;
  cin>>s;
  int n=s.length();
  char char_arr[n+1];
  strcpy(char_arr, s.c_str());
  unordered_set<char>set;
  for(int i=0; i < n ; i++){
      set.insert(char_arr[i]);
  }
  if(set.size()%2==0){
      cout<<"CHAT WITH HER!"<<endl;
  }
  else{
      cout<<"IGNORE HIM!"<<endl;
  }
  
    return 0;
}
