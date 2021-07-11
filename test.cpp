#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int n,m,a[N],nxt[N][2];
struct node{int l,r;}p[N][2],o[2];
void inter(node&x,node o){x.l=max(x.l,o.l),x.r=min(x.r,o.r);}
bool check(node x,int o){return x.l<=o&&o<=x.r;}
int main(){
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;++i){
		scanf("%d",&a[i]);
		for(int j=0;j<2;++j)
			scanf("%d%d",&p[i][j].l,&p[i][j].r);
	}
	p[n+1][0]=p[n+1][1]={0,m};
	for(int i=n;i;--i){
		o[0]=p[i][0],o[1]=p[i][1];
		for(int j=0;j<2;++j){
			if(check(o[j],a[i])){
				if(check(p[i+1][j],a[i]))nxt[i][j]=j^1;
				else inter(p[i][j^1],p[i+1][j^1]),nxt[i][j]=j;
			}
			else p[i][j^1]={m,0};
		}
	}
	if(!check(p[1][0],0)&&!check(p[1][1],0)){puts("No");return 0;}
	puts("Yes");
	for(int i=1,j=check(p[1][0],0);i<=n;j=nxt[i][j],++i)printf("%d ",j);
	return 0;
}