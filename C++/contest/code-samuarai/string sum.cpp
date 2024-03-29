#include<iostream>
#include<vector>
#include <algorithm>
#include<math.h>
#include<string.h>

using namespace std;
//____________________________________________________________________________________________________________________________________
/*#define PI  2*acos(0.0)
#define pf  printf
#define sc  scanf
#define ff  first
#define ss  second
#define pb  push_back
typedef long long ll;
typedef unsigned long long ull;
typedef std::vector<int> vi;
typedef vector<long long> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
#define sc1(n)         sc("%d",&n)
#define sc2(n, m)      sc("%d%d", &n, &m)
#define sc3(m, n, o)   sc("%d%d%d", &m, &n, &o)
#define scl(n)         sc("%lld", &n)
#define scll(n, m)     sc("%lld%lld", &n, &m)
#define sclll(n, m, o) sc("%lld%lld%lld", &n, &m, &o)
#define scf(f)         sc("%lf",&f);
#define pn(n)          pf("%d\n", n);
#define FOR(i,a,n)   for( int i = a; i < n; i++)
#define all(x) (x).begin(), (x).end()
#define FastIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int inf = 0x3f3f3f3f;
const int MOD =  1e9 + 7;
const long double EPS = 1e-9;
template <class T> inline T gcd(T a,T b){if(b==0)return a;return gcd(b,a%b);}
template <class T> inline double my_sqrt(T n) { double high = n + 5, low = 0, mid, ans; int cnt = 100; while(cnt--) { mid = low + (high - low) / 2; if(mid * mid <= n) ans = mid, low = mid; else high = mid; } return ans; }
template <class T> inline T bigmod(T b, T p){ if(p <= 0 || b == 0) return 1; ll x = b; if(p & 1) return (x * bigmod(b, p - 1)) % MOD; x = bigmod(b, p >> 1); return (x * x) % MOD;}
template <class T> inline string to_string(const pair<T,T> &p) {
return "{" + to_string(p.first) + "," + to_string(p.second) + "}";
}
*/
#ifdef SHADHIN
#define dbg(x) cout << _LINE_ << " says: " << #x << " = " << x << "\n"
#else
#define dbg(x)
#endif
//____________________________________________________________________________________________________________________________________
const int N=1e3+10;
char res[N];
void solve()
{
    char a[N], sign, b[N];

    cin>>a>>sign>>b;

    // cout<<a<<" "<<sign<<" "<<b<<endl;


    int len1=strlen(a);

    int len2=strlen(b);

    int maxLen=len1;
    if(len2>maxLen)
        maxLen=len2;

    // cout<<len1<<" "<<len2<<" "<<maxLen<<endl;
    res[0]='0';
    int carry=0;
    for(int i=maxLen;i>0;i--)
    {
        char x, y;
        if(len1>0)
        {
            x=a[len1-1];
            // cout<<a[len1-1]<<" ";
            len1--;
        }
        else
            x='0';

        if(len2>0)
        {
            y=b[len2-1];
            // cout<<b[len2-1]<<endl;
            len2--;
        }
        else
            y='0';


        int sum=(x-'0')+(y-'0')+carry;
        if(sum>=10)
        {
            carry=1;
            sum=sum%10;
        }
        else carry =0;
        // cout<<x<<" "<<y<<" "<<sum<<" "<<carry<<endl;

        char sumChar=sum+'0';
        // cout<<sumChar<<endl;

        res[i]=sumChar;
    }
    if(res[0]!='0')
        cout<<res<<endl;
    else
    {
        for(int i=1;i<=maxLen;++i)
            cout<<res[i];
        cout<<endl;
    }

}
int main()
{
    #ifdef SHADHIN
        freopen("/Users/shadhin/Desktop/Code/input.txt","r",stdin);
        freopen("/Users/shadhin/Desktop/Code/output.txt","w",stdout);
        int start_time = clock();
    #endif
    //FastIO;

    int test = 1;

    // sc1(test);

    while(test--)
    {
        solve();
    }

    #ifdef SHADHIN
        int end_time = clock();
        printf("\nTime = %.4f",(end_time-start_time+0.0)/CLOCKS_PER_SEC);
    #endif

    return 0;
}
