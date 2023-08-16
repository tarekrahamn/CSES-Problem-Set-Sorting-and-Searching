/*Starting with the name of almighty ALLAH 
Author:  Tarek Rahman
Created: 15.08.2023 
United International University 
*/
 
#include <bits/stdc++.h>
#define   int              long long int
#define   ull             unsigned long long int
#define   ld              long double
#define   vi              vector<int32_t>
#define   vll             vector<int>
#define   vc              vector<char>
#define   vs              vector<string>
#define   vb              vector<bool>
#define   pb              push_back
#define   ppb             pop_back
#define   mp              make_pair
#define   eb              emplace_back
#define   sz              size()
#define   ff              first
#define   ss              second
#define   YES             cout<<"YES"<<endl;
#define   NO              cout<<"NO"<<endl;
#define   ONLINE_JUDGE
#define   exit            return ;
#define   next            continue;
#define   checkmate       return 0;
#define   nl              "\n"
#define   gcd(a,b)        __gcd(a,b)
#define   lcm(a,b)        (a/gcd(a,b))*b
#define   MOD             1000000007
#define   MOD1            998244353
#define   INF             1e18
#define   PI              3.141592653589793238462
#define   dbug(...)       __f (#__VA_ARGS__, __VA_ARGS__)
#define   all(x)          (x).begin(), (x).end()
#define   des(x)          (x).rbegin(), (x).rend()
#define   FOREACH(it, l)  for (auto it = l.begin(); it != l.end(); it++)
#define   cinv(v)         for(auto &it:v)cin>>it;
#define   print1(a)       for(auto x : a) cout << x.ff << " " << x.ss << endl
#define   fo(i,a,b)      for(int i=a;i<b;i++)
#define   fora(i,a,b)     for(int j=a;j<b;j++)
#define   fora2(i,a,b)    for(int i=a;i<=b;i++)
#define   rof(i, a, b)    for (int i = a; i >=b; i--)
using namespace std;
// PRIME NUMBER TEST//
bool prime(int n){
    if(n<2)return false;
    if(n<=3)return true;
    if(n%2==0)return false;
    for(int i=3; i*i<=n; i+=2){
        if(n%i==0)return false;
    }
    return true;
}
//Exponent function 
int expo(int a, int b, int mod){
    int res = 1;
    while (b>0){
        if(b & 1){
            res = (res *a) % mod;
        }
        a = (a*a) % mod;
        b = b >> 1;
    }
    return res;
}


template <typename Arg1>
void __f (const char* name, Arg1&& arg1) { cout << name << " : " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args)
{
    const char* comma = strchr (names + 1, ',');
    cout.write (names, comma - names) << " : " << arg1 << " | "; __f (comma + 1, args...);
}
// chaling with pair
// First sort first 2 3 7 9
// now cheking 2 and 9 =this parir is not possible becuse max weight 10
// but just 9 can go so 9 is enter.
//then 2 and 7 ther pair sum is 9 so this is possible so 2 and 7 gose thre and remove them
// now 3 so it is less than k ..its go himself so our total count is 3
// that is == 9,{2,7} and 3
// Techniques :
// divide into cases, brute force, pattern finding
// sort, greedy, binary search
// transform into graph
void run(int t) {
    int n, k;
    cin >> n  >> k;
    vll a(n);
    fo(i,0,n) {
        cin >> a[i];
    }
    sort(all(a));
    int high =n-1;
    int low=0;
    int pairsss=0;
    while(low<=high){
        if((a[low] + a[high])<=k){
            low++;
            high--;
            pairsss++;
        }else{
            high--;
            pairsss++;
        }
    }
    cout<< pairsss <<endl;
}
int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input2.txt",  "r",  stdin);
    freopen("output2.txt", "w", stdout);
#endif
    clock_t z = clock();
    int t = 1;
   // cin >> t;
    while (t--){
        run(t);
    }
    cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);
    return 0;
}
