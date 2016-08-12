// Codeforces 510A - Fox And Snake.cpp
#include <iostream>
#include <cstdio>

#include <string>
#include <cstring>
#include <sstream>

#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <list>
#include <map>
#include <set>

#include <algorithm>
#include <bitset>
#include <functional>
#include <numeric>
#include <utility>
#include <iomanip>

#include <cmath>
#include <cstdlib>
#include <cctype>
#include <cstdlib>
#include <ctime>
using namespace std;

int caseno = 1;
#define NL '\n'
#define FOR(I,J,K) for(I = J; I < K; I++)
#define REV(I,J,K) for(I = J; I > K; I--)
#define SF scanf
#define PF printf
#define CLR(ar) memset(ar, 0, sizeof(ar))
#define SET(ar) memset(ar, -1, sizeof(ar))
#define PC() printf("Case %d: ", caseno++)
#define READ() freopen("in.txt", "r", stdin)
#define WRITE() freopen("out.txt", "w", stdout)
#define BOOST std::ios_base::sync_with_stdio(0);

typedef long long LL;//NOTES:"%lld"
typedef unsigned long long ULL;//NOTES:"%llu"
typedef long long int64;//NOTES:int64
typedef unsigned long long uint64;//NOTES:uint64

#define INF 2147483647
#define MOD 1000000007
const double PI = 2 * acos(0.0);
const double EPS = 1e-11;
const int SIZE = 1e6;

int main()
{
	BOOST
	int tcases, I, J, K, N, n, m, cnt = 0, len, row, col, f1 = 1, f2 = 0, f = 0;
	///READ();
	///WRITE();
	cin >> row >> col;

	for(I = 1; I <= row; I++)
	{
		f = 0;
		for(K = 1; K <= col; K++)
		{
			if(I & 1)
				cout << "#";
			else
			{
				if(K == col)
				{
					if(f1 == 1 && f == 0)
					{
						cout << "#";
						f1 = 0;
						f2 = 1;
					}
					else
						cout << ".";
				}
				else if(K == 1)
				{
					if(f2 == 1 && f1 == 0)
					{
						cout << "#";
						f1 = 1;
						f2 = 0;
						f = 1;
					}
					else
						cout << ".";
				}
				else
					cout << ".";
			}
		}

		cout << NL;
	}

	return 0;
}

