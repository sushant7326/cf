#include <bits/stdc++.h>
using namespace std;

// #define int         long long
#define endl "\n"
#define for0(i, n) for (int i = 0; i < n; i++)
#define fork(i, k, n) for (int i = k; k <= n ? i <= n : i >= n; k <= n ? i++ : i--)
#define for1(i, n) for (int i = 1; i <= n; i++)
#define gx(x) cout << #x << "=" << x << endl
#define gxy(x, y) cout << #x << "=" << x << "." << #y << "=" << y << endl
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define mem0(x) memset(x, 0, sizeof(x))
#define mem1(x) memset(x, -1, sizeof(x))
#define tr(x, a) for (auto &x : a)

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vpii;
typedef vector<vi> vvi;
typedef map<int, int> mii;
typedef set<int> si;

/*-------------------------------------------------- UTILITIES-----------------------------------------------------------------------*/
const int N = 1e6 + 1;
const int MOD = 1e9 + 7;
int fact[N], pow2[N], factinv[N];
#define PI 3.1415926535897932384626433832795
int min(int a, int b)
{
    if (a < b)
        return a;
    return b;
}
int max(int a, int b)
{
    if (a > b)
        return a;
    return b;
}
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int lcm(int a, int b) { return a / gcd(a, b) * b; }
string to_upper(string a)
{
    for (int i = 0; i < (int)a.size(); ++i)
        if (a[i] >= 'a' && a[i] <= 'z')
            a[i] -= 'a' - 'A';
    return a;
}
string to_lower(string a)
{
    for (int i = 0; i < (int)a.size(); ++i)
        if (a[i] >= 'A' && a[i] <= 'Z')
            a[i] += 'a' - 'A';
    return a;
}
bool isprime(int N)
{
    if (N == 1)
        return 0;
    for (int i = 2; i * i <= N; i++)
    {
        if (!(N % i))
            return 0;
    }
    return 1;
}
void yes() { cout << "Yes\n"; }
void no() { cout << "No\n"; }
int ceil(int a, int b)
{
    int res = a / b;
    if (a % b)
        res++;
    return res;
}
int mod_add(int a, int b)
{
    int ans = (a + b) % MOD;
    if (ans < 0)
        ans += MOD;
    return ans;
}
int mod_sub(int a, int b)
{
    int ans = (a - b) % MOD;
    if (ans < 0)
        ans += MOD;
    return ans;
}
int mod_mul(int a, int b)
{
    int ans = (a * b) % MOD;
    if (ans < 0)
        ans += MOD;
    return ans;
}
int mpow(int a, int b)
{
    if (b == 0)
        return 1;
    int ans = mpow(a, b / 2);
    ans = mod_mul(ans, ans);
    if (b % 2)
        ans = mod_mul(ans, a);
    return ans;
}
int mod_inv(int a) { return mpow(a, MOD - 2); }
int mod_div(int a, int b) { return mod_mul(a, mod_inv(b)); }
void init()
{
    fact[0] = 1;
    pow2[0] = 1;
    for1(i, N - 1)
    {
        fact[i] = mod_mul(i, fact[i - 1]);
        pow2[i] = mod_mul(2, pow2[i - 1]);
    }
    factinv[N - 1] = mod_inv(fact[N - 1]);
    fork(i, N - 2, 0) { factinv[i] = mod_mul(i + 1, factinv[i + 1]); }
}
int nCr(int n, int r)
{
    int ans = mod_mul(fact[n], factinv[r]);
    ans = mod_mul(ans, factinv[n - r]);
    return ans;
}
template <typename T>
void zero_based(vector<T> &v)
{
    fork(i, 1, v.size() - 1) v[i - 1] = v[i];
    v.pop_back();
}
template <typename T>
void one_based(vector<T> &v)
{
    int n = v.size();
    v.pb(v[n - 1]);
    fork(i, n, 1) v[i] = v[i - 1];
}

template <typename T>
istream &operator>>(istream &istream, vector<T> &v)
{
    for (int i = 0; i < v.size(); i++)
        cin >> v[i];
    return istream;
}
template <typename T>
ostream &operator<<(ostream &ostream, vector<T> &v)
{
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    return ostream;
}
template <typename T1, typename T2>
istream &operator>>(istream &istream, pair<T1, T2> &p) { return (istream >> p.first >> p.second); }
template <typename T1, typename T2>
ostream &operator<<(ostream &ostream, pair<T1, T2> &p) { return (ostream << "{" << p.first << " " << p.second << "}"); }

void answer(bool ok)
{
    if (ok)
        cout << "YES\n";
    else
        cout << "NO\n";
}

void FASTIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

/*----------------------------------------------------CODE BEGINS---------------------------------------------------------------------*/

void solve()
{
    int32_t n;
    cin >> n;
    vector<vector<int>> v(n);
    int sumX = 0;
    int sumY = 0;
    int sumZ = 0;
    int32_t i = 0;
    for0(i, n)
    {
        v[i] = vector<int>(3);
        cin >> v[i][0];
        sumX += v[i][0];
        cin >> v[i][1];
        sumY += v[i][1];
        cin >> v[i][2];
        sumZ += v[i][2];
    }

    if ((sumX == 0 && sumY == 0 && sumZ == 0))
        cout << "YES\n";
    else
        cout << "NO\n";
}

int32_t main()
{
    // int t;
    // cin >>t;
    // while(t--){
    //     solve();
    // }
    solve();
}