#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
using namespace std;
typedef	long long ll;
#define all(v) ((v).begin()),((v).end())
#define clr(v,val) memset(v,val,sizeof v)
void file(){
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin); //freopen("out.txt", "w", stdout);  
#endif
}
void fast(){
	std::ios_base::sync_with_stdio(0); cin.tie(NULL);
}
const int N = 510 + 20;
/***You***Can***Do***It***/
int main()
{
	file();
	fast();
	string x;
	while (getline(cin,x)){
		string y;
		if (x == "DONE"){
			break;
		}
		for (int i = 0; i < x.size(); i++){
			if (isalpha(x[i])){
				y += tolower(x[i]);
			}
		}
		string y1 = y;
		reverse(all(y));
		if (y == y1){
			cout << "You won't be eaten!\n";
		}
		else {
			cout << "Uh oh..\n";
		}
	}
}