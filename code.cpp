#include<bits/stdc++.h>
using namespace std ;
#define ll long long
#define ld long double
#define ff first
#define ss second
const int nmax = 1e5 + 10 ;
vector < pair < ll , ll > > edge[nmax] ;
int main(){
   //ios_base::sync_with_stdio(false);
   //cin.tie(NULL);
  // cout.tie(NULL);
    int n , m , k ;
   cout<<"Enter the total number of cities:\n";
   cin>>n;
   cout<<"Enter the total number of roads:\n";
   cin>>m;
   cout<<"Enter the total  number of special offers:\n";
   cin>>k;
   cout<<"Enter edge connecting roads and corona index associated with it:\n";
   for( int i = 0 ; i < m ; i++){
       ll  x , y ;
       ll w ;
       cin >> x >>  y >> w ;
       edge[x].push_back(make_pair(y,w));//Adding edge which will take the road connecting and the Corona Index associated with it
       edge[y].push_back(make_pair(x,w));// If city 1 is connected to city 2 means city 2 is also connected to city 1.so adding the edge
   }
   const ll inf = 1e18 ;//constant
   vector < int > vis(n+1) ;
   queue < pair < int , int > > q ;
   vector < vector < ll > >  dp(n+1 , vector < ll > (k+1,inf));
   q.push({1,0}); //initial value
   dp[1][0] = 0 ;
  // int cnt = 3 ;
   while(!q.empty()){
       int node = q.front().ff;
       int parent = q.front().ss ;
       q.pop();
       //cout << node << " " ;
       for(pair<int , ll > child : edge[node]){ //taking the city one by one and checking the routes possible
           if(child.ff==parent) continue ;
           bool flag = false ;
           for(int use = 0 ; use <= k ; use++){
               if(use < k && dp[child.ff][use+1] > dp[node][use]){ //checking if we can use the offer for the route
                   flag = true ;
                   dp[child.ff][use+1] = dp[node][use] ;
               }
               if( dp[child.ff][use] > dp[node][use] + child.ss ){
                   flag = true ;
                   dp[child.ff][use] = dp[node][use] + child.ss ;
               }
           }
           if(flag){
               //cout << child.ff << " " ;
               q.push({child.ff,node}); //queue to check remaining cities
           }
       }
       //cout << "\n" ;
//        cnt--;
//        if(cnt==0)
//        break;
   }
   //cout << "\n" ;
   vector < ll > ans(n+1,inf) ;
   for( int i = 1 ; i <= n ; i++){
       for( int j = 0 ; j <= k ; j++){
             //  cout << dp[i][j] << " " ;
           ans[i] = min(ans[i],dp[i][j]);
       }
       //cout << "\n" ;
        //Checking with Government Guided Corona Index and printing a message
        if(ans[i]>=0 && ans[i]<=10)
         cout<<"After Travelling from City 1 to City "<<i<<" Corona Index will be:"<<ans[i]<<" which tells you will be safe while travelling through this route.\n";
         else if(ans[i]>=11 && ans[i]<=20)
         cout<<"After Travelling from City 1 to City "<<i<<" Corona Index will be:"<<ans[i]<<" which tells you need to be quarantized in city "<<i<<" for 14 Days and take necessary precautions.\n";
         else
         cout<<"After Travelling from City 1 to City "<<i<<" Corona Index will be:"<<ans[i]<<" which tells you will under Government Care for next 28 Days with Proper precautions and care.\n";
   }

}
