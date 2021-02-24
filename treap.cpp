//
// Created by lsc19 on 2019-03-20.
//
/*
#include <iostream>

using namespace std;
const int MAXN = 1024;
const int INF=1e9+7;
int lc[MAXN], rc[MAXN], siz[MAXN], rnd[MAXN], cnt[MAXN], val[MAXN];

int sz = 0;

int rand() {
    static int seed = 1;
    seed = seed = (int) seed * 482711LL % 2147483647;
    return seed;
}

void update(int p) {
    siz[p] = siz[lc[p]] + siz[rc[p]] + cnt[p];
}

void lturn(int &u) {
    int t = rc[u];
    rc[u] = lc[t];
    lc[t] = u;
    siz[t] = siz[u];
    update(u);
    u = t;//??
}

void rturn(int &u) {
    int t = lc[u];
    lc[u] = rc[t];
    rc[t] = u;
    siz[t] = siz[u];
    update(u);
    u = t;//??
}

void insert_node(int &u, int x) {
    if (u == 0) {
        u = ++sz;
        siz[u] = 1;
        cnt[u] = 1;
        val[u] = x;
        rnd[u] = rand();
        return;
    }
    siz[u]++;//插入节点更新路径上的size
    if (x = val[u])cnt[u]++;
    else if (x > val[u]) {
        insert_node(rc[u], x);
        if (rnd[rc[u]] < rnd[u])lturn(u);
    } else {
        insert_node(lc[u], x);
        if (rnd[lc[u]] < rnd[u])lturn(u);
    }
}
void delete_node(int &u,int x){
    if(u==0)return;
    if(val[u]==x){
        if(cnt[u]>1){
            cnt[u]--;
            siz[u]--;
        }else{
            if(lc[u]==0||rc[u]==0)u=lc[u]+rc[u];
            else if (rnd[lc[u]] < rnd[rc[u]]){
                rturn(u);
                delete_node(u,x);
            }else{
                lturn(u);
                delete_node(u,x);
            }
        }

    } else if(x>val[u]){
        siz[u]--;
        delete_node(rc[u],x);
    } else{
        siz[u]--;
        delete_node(lc[u],x);
    }
}
int query_by_val(int u,int x){
    if(u==0)return 0;
    if(val[u]==x){
        return siz[lc[u]]+1;//注意为什么不是cnt[u]
    } else if(x>val[u]){
        return siz[lc[u]]+cnt[u]+query_by_val(rc[u],x);
    }else{
        return query_by_val(lc[u],x);
    }
}
int query_by_rank(int u,int x){
    if(u==0)return 0;
    if(x<=siz[lc[u]])query_by_rank(lc[u],x);
    else{
        x-=siz[lc[u]];
        if(x<=cnt[u])return val[u];
        else{
            x-=cnt[u];
            query_by_rank(rc[u],x);
        }
    }
}
int findfront(int u,int x)
{
    if (u==0) return -INF;
    if (val[u]<x) return max(val[u],findfront(rc[u],x));
    else if (val[u]>=x) return findfront(lc[u],x);
}

int findback(int u,int x)
{
    if (u==0) return INF;
    if (val[u]<=x) return findback(rc[u],x);
    else return min(val[u],findback(lc[u],x));
}
int ss;
int main() {
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int flag,x;
        scanf("%d%d",&flag,&x);
        if (flag==1) insert_node(ss,x);
        if (flag==2) delete_node(ss,x);
        if (flag==3) printf("%d\n",query_by_val(ss,x));
        if (flag==4) printf("%d\n",query_by_rank(ss,x));
        if (flag==5) printf("%d\n",findfront(ss,x));
        if (flag==6) printf("%d\n",findback(ss,x));
    }
}
 */
/*
#include <stdio.h>
#include <algorithm>
#include <stdlib.h>
using namespace std;
#define inf 300000030
int l[100100],r[100100],v[100100],size[100100],rnd[100100],ct[100100];
int sz;
void update(int p)
{
    size[p]=size[l[p]]+size[r[p]]+ct[p];
}
void lturn(int &k)
{
    int t=r[k];
    r[k]=l[t];
    l[t]=k;
    size[t]=size[k];
    update(k);
    k=t;
}
void rturn(int &k)
{
    int t=l[k];
    l[k]=r[t];
    r[t]=k;
    size[t]=size[k];
    update(k);
    k=t;
}
void ins(int &p,int x)
{
    if (p==0)
    {
        p=++sz;
        size[p]=ct[p]=1,v[p]=x,rnd[p]=rand();
        return;
    }
    size[p]++;
    if (v[p]==x) ct[p]++;
    else if (x>v[p])
    {
        ins(r[p],x);
        if (rnd[r[p]]<rnd[p]) lturn(p);
    }
    else
    {
        ins(l[p],x);
        if (rnd[l[p]]<rnd[p]) rturn(p);
    }
}
void del(int &p,int x)
{
    if (p==0) return;
    if (v[p]==x)
    {
        if (ct[p]>1) ct[p]--,size[p]--;
        else
        {
            if (l[p]==0||r[p]==0) p=l[p]+r[p];
            else if (rnd[l[p]]<rnd[r[p]]) rturn(p),del(p,x);
            else lturn(p),del(p,x);
        }
    }
    else if (x>v[p]) size[p]--,del(r[p],x);
    else size[p]--,del(l[p],x);
}
int query1(int p,int x)
{
    if (p==0) return 0;
    if (v[p]==x) return size[l[p]]+1;
    if (x>v[p]) return size[l[p]]+ct[p]+query1(r[p],x);
    else return query1(l[p],x);
}
int query2(int p,int x)
{
    if (p==0) return 0;
    if (x<=size[l[p]]) return query2(l[p],x);
    x-=size[l[p]];
    if (x<=ct[p]) return v[p];
    x-=ct[p];
    return query2(r[p],x);
}
int findfront(int p,int x)
{
    if (p==0) return -inf;
    if (v[p]<x) return max(v[p],findfront(r[p],x));
    else if (v[p]>=x) return findfront(l[p],x);
}
int findback(int p,int x)
{
    if (p==0) return inf;
    if (v[p]<=x) return findback(r[p],x);
    else return min(v[p],findback(l[p],x));
}
int ss;
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int flag,x;
        scanf("%d%d",&flag,&x);
        if (flag==1) ins(ss,x);
        if (flag==2) del(ss,x);
        if (flag==3) printf("%d\n",query1(ss,x));
        if (flag==4) printf("%d\n",query2(ss,x));
        if (flag==5) printf("%d\n",findfront(ss,x));
        if (flag==6) printf("%d\n",findback(ss,x));
    }
}

 */
