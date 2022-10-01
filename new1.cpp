#include<bits/stdc++.h>
using namespace std;

#define FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
#define PI 3.1415926535
#define SORT(v)  sort(v.begin(), v.end())
#define SORTR(v) sort(v.rbegin(), v.rend())
#define MAX(v) *max_element(v.begin(), v.end())
#define MIN(v) *min_element(v.begin(), v.end())

typedef long long int ll;

const ll N = 3e5 + 10;
const ll mod = 1e9 + 7;
const ll MAXX = 1e6 + 5;
const ll nn=1e5 + 1;
const ll inf = (1LL<<63 -1) + (1LL<<62 -1);

void findDivisors(int n);   //!!Make div array public!! - 1 to n array
void sieve(int n);          //!!Make vi and array public!! - List of primes/Bool array to check prime
ll mpow(ll base, ll exp);    //modular exponentialtion, md = 1e9+7 default
ll gcd(ll a, ll b);
int lcm(int a, int b);
int ncr(int n, int r);
int highestPowerOf2(int n);    //Highest power of 2 that divides n
ll count_digit(ll number);   //Number of digits present in a number
int sum_digit(int n);             //Sum of digits
int sum_digit(string str);        //in a number
string dec2bin(int n);
ll BinExpRecur(ll a,ll b);
ll BinExpIter(ll a,ll b);
//Graph/Tree functions to be added!

ll XOR(ll x, ll y){
   return (x | y) & (~x | ~y);
}
bool cmp(const pair<int,int> &a,const pair<int,int> &b) {
	return (a.second < b.second);
}

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
								DON'T MAKE CHANGES BEFORE THIS LINE!
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
ll binaryToDecimal(string n){
	string num = n;
	ll dec_value = 0;
 
	// Initializing base value to 1, i.e 2^0
	ll base = 1;
	ll len = num.length();
	for (ll i = len - 1; i >= 0; i--) {
		if (num[i] == '1')
			dec_value += base;
		base = base * 2;
	}
 
	return dec_value;
}
string decimalToBinary(ll n){
	string s = bitset<64> (n).to_string();
	const auto loc1 = s.find('1');
	if(loc1 != string::npos)
		return s.substr(loc1);
	return "0";
}
bool com(const pair<ll,ll> &a, const pair<ll,ll> &b){
	if(a.first!=b.first) return a.first < b.first;
	else return a.second > b.second;
}

ll fact(ll n){
	ll res = 1;
	for (ll i = 2; i <= n; i++)
		res = res * i;
	return res;
}
ll biexp(ll a, ll b){
  ll res=1;
  while(b>0)
  {
    if(b%2) res=(res)*(a);
    b=b/2;
    a=(a*a);
  }
  return res;
}
// ll nCr(ll n, ll r)
// {    
//  ll flag=0;
//  if(r>=(n-r)){
//      ll prod=1;
//      for(ll i=r+1;i<=n;i++){
//          prod*=i;
//          if(prod%fact(n - r) ==0 and flag==0){
//              prod/=(fact(n - r));
//              flag=1;
//          }
//      }
//      if(flag==1){
//          return prod;
//      }
//      else{
//          return prod / fact(n - r);
//      }
//  }
//  else{
//      ll prod=1;
//      for(ll i=n-r+1;i<=n;i++){
//          prod*=i;
//          if(prod%fact(r) ==0 and flag==0){
//              prod/=(fact(r));
//              flag=1;
//          }
//      }
//      if(flag==1){
//          return prod;
//      }
//      else{
//          return prod / fact(r);
//      }
//  }
   
// }

ll findXOR(ll n)
{
    ll modd = n % 4;

    if (modd == 0)
        return n;

    else if (modd == 1)
        return 1;

    else if (modd == 2)
        return n + 1;

    else if (modd == 3)
        return 0;
}

ll binarySearch(ll arr[], ll l, ll r, ll x){
	if (r >= l) {
		ll mid = l + (r - l) / 2;
		if (arr[mid] == x)
			return mid;
		if (arr[mid] > x)
			return binarySearch(arr, l, mid - 1, x);
		return binarySearch(arr, mid + 1, r, x);
	}
	return -1;
}


int main() {
	FAST;
	cout.precision(numeric_limits<double>::max_digits10);	
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	
	
	ll tt=1;
	// cin>>tt;
	for(ll ttt=1;ttt<=tt;ttt++){
		ll flag=0,glob=0,cnt1=0,cnt2=0,ans=0,j=0,sum=0;
		ll mx=0,mn=inf,flagc=0,cnt=0,x=0;
		ll mx1=0,mx2=0,mx11=0,mxt=0;

		ll a=0;
		cin>>a;
		ll b=0;
		cin>>b;
		x=gcd(a,b);
		for(ll i=)
		ll n=0;
		cin>>n;
		// ll Ql=0;
		// cin>>Ql;
		// ll Qr=0;
		// cin>>Qr;
		// ll cntt[n+10]={0};
		// ll a[n+10]={0};
		// ll b[n+10];
		// for(ll i=1;i<=n;i++){
		// 	cin>>a[i];
		// }
		while(n--){
			ll m1,m2;
			cin>>m1>>m2;
			ll xx=m1/x;
			cout<<xx<<"huehue";
			if(m1%x==0){
				cout<<x*xx;
			}
			else{
				if(((xx+1)*x)<=m2){
					cout<<((xx+1)*x);
				}
				else{
					cout<<-1;
				}
			}
			cout<<endl;

		}








		// cout<<endl;
		
	}
	return 0;
}
	  

	// string s;
	// while(cin>>s){
	//  cout<<"NO";
	//  cout<<endl;
	// }
	// fflush(stdout);

//  return 0;
		
// }

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
								DON'T MAKE CHANGES AFTER THIS LINE!
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/   

// ll BinExponentiationIter(ll a,ll b){
//  ll ans=1;
//  while(b){
//      if(b&1){
//          ans=ans*a;
//      }
//      a=a*a;
//      b>>=1;
//  }
//  return ans;
// }

// ll BinExponentiationRecur(ll a,ll b){
//  if(b==0) return 1;
//  ll res = BinExpRecur(a,b/2);
//  if(b&1){
//      return a*res*res;
//  }
//  else{
//      return res*res;
//  }
// }


void findDivisors(int n)
{
	int div[N];                   //HERE!!
	memset(div, 0, sizeof div);
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j * i <= n; j++)
			div[i * j]++;
	}
}
	
void sieve(int n)   //O(nlog(logn))
{
	vector<int> primes;      //HERE!!
	bool iscomp[N];          //HERE!!
	for(int i = 2; i <= n; ++i)
	{
		if(!iscomp[i])
			primes.push_back(i);
		for(int j = 0; j < primes.size() && i * primes[j] <= n; ++j)
		{
			iscomp[i * primes[j]] = true;
			if(i % primes[j] == 0)
				break;
		}
	}
}
	
ll mpow(ll base, ll exp)
{
	ll result = 1;
	// base %= md;
	
	if(base==0) return 0;
	
	while(exp>0)
	{
		if(exp&1)
			result = (result*base);
		base = (base*base);
		exp>>=1;
	}
	return result;
}
	
ll gcd(ll a, ll b) // Time Complexity: O(log(max(a,b))) or use (__gcd(a,b) function in C++ STL)
{
	if(b==0)    return a;
	return gcd(b, a%b);
}
	
int lcm(int a, int b)// Time Complexity: O(log(max(a,b)))
{
	return a*(b/gcd(a,b));
}
	
int ncr(int n,int r)
{
	vector<int> fac(N),inv(N);
	return fac[n] * (inv[r] * inv[n-r] % mod) % mod;
	return fac[n] * (mpow(fac[r],mod-2) * mpow(fac[n-r],mod-2) % mod ) % mod;
}
	
int highestPowerOf2(int n)
{
	return (n & (~(n - 1)));
}
	
ll count_digit(ll number)
{
	return int32_t(log10(number) + 1);
}
	
int sum_digit(int n)
{
	int sum = 0;
	while (n != 0)
	{
		sum = sum + n % 10;
		n = n / 10;
	}
	return sum;
}
	
int sum_digit(string str)
{
	int sum = 0;
	for (int i = 0; i < str.length(); i++)
	{
		sum = sum + str[i] - 48;
	}
	return sum;
}
	
string dec2bin(int n)
{
	const int size=sizeof(n)*8;
	string s = "00000000000000000000000000000000";
	for (int a=0;a<32;a++)
	{
		if(n==0)
			return s;
		else
		{
			if(n%2!=0)
				s[31-a]='1';
			n/=2;
		}
	}
	return s;
}