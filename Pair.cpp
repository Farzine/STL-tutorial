#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int, pair<int ,int>>&x,pair<int, pair<int ,int>>&y){
    return x.second.second< y.second.second;
}

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   vector<pair<int, pair<int , int>>>a;
   for(int i=0; i<3; i++)
   {
       int b, c, t;

       cin>>b>>c >> t;
       a.push_back({b, {c, t}});


   }
sort(a.begin(), a.end(),cmp);

for(auto v : a)
   cout << v.first <<  " "  << v.second.first<<" "<<v.second.second<< '\n';
   return 0;
}
