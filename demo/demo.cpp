#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef pair<int, int> pii;
#define endl "\n"
#define sd(val) scanf("%d", &val)
#define ss(val) scanf("%s", &val)
#define sl(val) scanf("%lld", &val)
#define debug(val) printf("check%d\n", val)
#define all(v) v.begin(), v.end()
#define PB push_back
#define MP make_pair
#define FF first
#define SS second
#define ll long long
#define MOD 1000000007
#define clr(val) memset(val, 0, sizeof(val))
#define what_is(x) cerr << #x << " is " << x << endl;
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    int total;

    for (int i = 0; i < t; i++)
    {

        int n, k;
        cin >> n >> k;

        string s;
        // s = to_string(n);
        stringstream ss;
        ss << n;
        ss >> s;
        int len = s.size();
        int tmp = 1;
        sort(s.begin(), s.end());
        int ans = 1, tempo;

        cerr << s << endl;
        cout << " what do you want?? " << endl;
        int it = 0;
        for (int i = 0; i < k; i++)
        {
            cerr << (s[it] - '0') << "..." << endl;
            if ((s[it] - '0') != (s[it + 1] - '0'))
            {
                int x = (s[it] - '0') + 1;
                cout << "c" << x << endl;
                s[it] = x;
            }
            else if ((s[it] - '0') == (s[it + 1] - '0'))
            {
                int x = (s[it] - '0') + 1;
                cout << "c" << x << endl;
                s[it] = x;
            }
            else if (len == 1)
            {
                int x = (s[it] - '0') + 1;
                cout << "c" << x << endl;
                s[it] = x;
            }
            else
            {
                it++;
            }
        }

        stringstream tempos;
        tempos << s;
        tempos >> tempo;

        for (int i = 0; i < len; i++)
        {
            ans *= (tempo % 10);
            tempo /= 10;
        }
        cout << ans << endl;
    }

    return 0;
}