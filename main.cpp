#include<bits/stdc++.h>
 
using namespace std;
 
#define Fast1 ios_base::sync_with_stdio(0)
#define Fast2 cin.tie(0)
#define Fast3 cout.tie(0)
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
#define mod 1e9 + 7
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)
#define INF 1000000000000000003
typedef long long int ll;
typedef short int SI;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define POB pop_back
#define MP make_pair
 
// void getResult(){
 
// }
int main()
{
    Fast1;
    Fast2;
    Fast3;
    int T;
    cin >> T;
    while (T--) {
        int s1,s2,e1,e2,f1,f2;
        cin>>s1>>s2>>e1>>e2>>f1>>f2;
        int path = abs(s1 - e1) + abs(s2-e2);
 
        if( s1 != e1 && s2 != e2) cout<<path<<"\n";
 
        else{
        if( path == (abs(s1-f1) + abs(s2 - f2) + abs(e1 - f1) + abs(e2 - f2)) ) cout<< path + 2 <<"\n";
        else cout<<path<<"\n";
        }
 
 
    }
    return 0;
}
