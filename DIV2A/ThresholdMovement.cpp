#include <bits/stdc++.h>

using namespace std;
using v = vector<int>;
using vv = vector<vector<int>>;
using ll = long long;
using vll = vector<ll>;
using ii = pair<ll,ll>;
using vp = vector<ii>;


#define PI (acos(-1.0))
#define scan vll a(n);rep(i,n){cin>>a[i];}
#define endl '\n'
#define cn long long n ; cin>> n;
#define rep(i,x) for(int i = 0; i<x ; i++)
#define pb push_back
#define MOD 1000000007
#define asort(a) sort(a,a+n)
#define dsort(a) sort(a,a+n,greater<int>())
#define tt int t; cin >> t; while (t--)
#define pc cout << "Case " << i++ << ": "
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define take_str string s; cin>>s


// ------------------ Math Utilities ------------------
ll floor_div(ll a, ll b) {
    if (b == 0) throw std::invalid_argument("Division by zero");
    ll res = a / b;
    if ((a ^ b) < 0 && a % b != 0) res--;
    return res;
}

ll ceil_div(ll a, ll b) {
    if (b == 0) throw std::invalid_argument("Division by zero");
    ll res = a / b;
    if ((a ^ b) > 0 && a % b != 0) res++;
    return res;
}

//---------- Sieve of Eratosthenes ---------------
vector <int> sieve(int n){
    vector<int> s(n+1,1);
    for(int i = 2 ; i <= sqrt(n) ; i++){
        if(s[i] == 0) continue;
        if(s[i] == 1){
            for(int j = i * i ; j <= n ; j += i){
                s[j] = 0;
            }
        }
    }
    vector<int> ans;
    for(int i = 2 ; i <= n ; i++){
        if(s[i] == 1 && i != 0 && i != 1){
            ans.push_back(i);
        }
    }
    return ans;
}

// check if the number is prime
bool isPrime(int n) {
    if (n < 2) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for(ll i = 2 ; i * i < n ; i++){
        if(n % i == 0) return false;
    }
    return true;
}

vector <vector<int>> countdivisors(int n){
    vector <vector<int>> divisors(n+1);
    for(int i = 1 ; i <= n ; i++){
        for(int j = i ; j <= n ; j += i){
            divisors[j].push_back(i);
        }
    }
    return divisors;
}

// to check if the number is a perfect square or not
bool isPerfectSquare(ll n) {
    if(n < 0) return false;
    if(n == 0 || n == 1) return true;

    ll low = 0 , high = n;

    while(low <= high){
        ll mid = low + (high - low) / 2;
        ll sq = mid * mid;

        if(sq == n){
            return true;
        }
        if(sq < n){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return false;
}

long long binpow(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1) res = (res * a) % m;
        a = (a * a) % m;
        b >>= 1;
    }
    return res;
}

ll inverse(ll x){
    return binpow(x , MOD - 2 , MOD);
}

void solve(){
    cn;
    vector<int> v(n , 0);
    rep(i , n){
        cin>>v[i];
    }
    if(n == 1){
        NO;
        return;
    }
    int prev = 0;
    int ok = true;
    for(int i = 1 ; i < n ; i++){
        if(a[i] )
    }

    if(ok){
        YES;
    }
    else{
        NO;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    tt{
        solve();
    }
    
    return 0;
}