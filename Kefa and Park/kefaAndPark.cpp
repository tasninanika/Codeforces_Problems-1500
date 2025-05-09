#include<bits/stdc++.h>
using namespace std;


int cat[110000];
int vis[110000];
int cnt[110000];
vector<int> vec[110000];
int n, m;

int bfs(int x){
	memset(vis, 0, sizeof(vis));
	memset(cnt, 0, sizeof(cnt));
	int ans = 0;
	vis[x] = 1;
	if(cat[x] == 1) cnt[x] = 1;
	queue <int> que;
	que.push(x);



int main(){


    return 0;
}
