#include <iostream>
 
#include <unordered_set>
using namespace std;
 
int main()
{
    
    int A[4];
    for(int i=0; i < 4; i++){
        cin>>A[i];
    }
    unordered_set<int>s;
    for(int i=0; i < 4; i++){
        s.insert(A[i]);
    }
    if(s.size() < 4){
        int k=4-s.size();
       // int ans=s.size()+k;
        cout<<k<<endl;
    }
    else if (s.size()==4){
        cout<<0<<endl;
    }
    else{
        cout<<s.size()<<endl;
    }
 
    return 0;
}
