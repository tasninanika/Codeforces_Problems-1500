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
	while(!que.empty()) {
		int t = que.front();
		que.pop();
		int a;
		if(vec[t].size() == 1 and vis[vec[t][0]] == 1 and cnt[t] <= m) {
			ans ++;
		}
		else {
			for(int i = 0; i < vec[t].size(); i ++){
				a = vec[t][i];
				if(vis[a] == 0) {
					if(cat[a] == 1) {
						cnt[a] = cnt[t] + 1;
					}
					else if(cnt[t] > m) {
						cnt[a] = cnt[t];
					}



int main(){


    return 0;
}
