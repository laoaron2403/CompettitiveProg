#include<bits/stdc++.h>
#define FOR(i,a,b) for(long long i=(a);i<=(b);++i)
#define ROF(i,a,b) for(long long i=(a);i>=(b);--i)
#define all(x) (x).begin(),(x).end()
#define sz(x) (int)(x).size()
#define x first
#define y second
#define make_unique(x) sort(all(x)), (x).erase(unique(all(x)), (x).end())
#define LSOne(i) ((i)&-(i))

using namespace std;

typedef long long i64;
//typedef __int128 i128
typedef long double ld;
typedef pair<int,int> pii;
typedef pair<i64,i64> pll;
typedef pair<ld,ld> pdd;

int readInt(){ int a; scanf("%d",&a); return a; }
i64 readLong(){ i64 a; scanf("%lld",&a); return a; }
ld readDouble(){ ld a; scanf("%Lf",&a); return a; }
void readString(char *s){ scanf(" %s",s); }

void solve(){
	int a = readInt();
	printf("%d\n",a);
}

int main(){
	int t=1;
	//t = readInt();
	while(t--){
		solve();
	}
	return 0;
}
