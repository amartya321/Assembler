#include <iostream>
//#include<vector>
using namespace std;
void recur(int n,int k,int s,int sum,/*vector <int> vec,*/int &ans){
    if(k==0 && sum==s){
        ans++;
        return ;
    }else if(k==0){
        return ;
    }
    for(int i=n;i>0;i--){
        sum+=i;
        k--;
       // vec.push_back(i);
        recur(i-1,k,s,sum/*,vec*/,ans);
        sum-=i;
        k++;
        //vec.pop_back();
    }
}
int main()
{
    int n,k,s;
    cin>>n>>k>>s;
    int sum=0;
   // vector <int> vec;
    int ans=0;
    if(n==0 && k==0 && s==0 ) {
        cout<<0<<endl;
        return 0;
    }
    recur(n,k,s,sum,ans);
    cout <<ans<<endl;
    return 0;
}
