#include <iostream>
#include <map>
#include <string.h>
#include <vector> 
 
using namespace std;
 
int main()
{
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	//cout.tie(NULL);
    int t;
    scanf("%d", &t);
    while(t--) {
        int n, k;
        string line = "";
        scanf("%d%d", &n, &k);
        vector <string> v[17];
        map<string, bool> m;
        char s[11];
        int ans = 0;
        for (int i = 0; i < n; i++) {
            int p;
            scanf("%d", &p);
            while (p--) {
                scanf("%s", s);
                v[i].push_back(s);
                 if (!m[s]) {
                    ans++;
                    m[s]= 1;
                }
            }
 
        }
        if (ans < k) printf("-1\n");
        else {
            int p = (1 << n);
            int ans = n;
            for (int i = 1; i < p; i++) {
                map <string, bool> m;
                int ctr = 0;
                int bits = 0;
                for (int j = 0; j < n; j++) {
                    if (i&1<<j) {
                        bits++;
                        int z = v[j].size();
                        for (int kk = 0; kk < z; kk++) {
                            if (!m[v[j][kk]]) {
                                m[v[j][kk]] = 1;
                                ctr++;
                            }
                        }
                    }
                }
                if (ctr >= k && ans > bits) ans = bits;
            }
            printf("%d\n",ans);
        }
    }
    return 0;
}