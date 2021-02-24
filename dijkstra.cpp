//
// Created by lsc19 on 2019-03-10.
//

/*
#include <iostream>
#include <cstring>

using namespace std;
const int MAXN = 10005;
const int INF = 1e9;
typedef struct node {
    int to, nxt, val;
};
int head[105];
node edge[10005];
int cnt;
int dist[10005];
int vis[10005];
int n, m;

void init() {
    memset(head, -1, sizeof(head));
    for (int i = 0; i < MAXN; ++i) {
        dist[i] = INF;
        vis[i] = 0;
    }
    cnt = 0;
}

void add_edge(int u, int v, int w) {
    edge[cnt].to = v;
    edge[cnt].val = w;
    edge[cnt].nxt = head[u];
    head[u] = cnt;
    cnt++;
}

int dijkstra(int st) {
    dist[st] = 0;
    vis[st] = 1;
    for (int j = head[st]; j != -1; j = edge[j].nxt) {
        dist[edge[j].to] = edge[j].val;
    }
    for (int i = 0; i < n; ++i) {
            int tmin = INF, tmp;
            for (int j = head[i]; j != -1; j = edge[j].nxt) {
                int to = edge[j].to;
                int val = edge[j].val;
                if (!vis[to] && tmin > dist[to]) {
                    tmp = to;
                    tmin = dist[to];
                }
            }
            //tmp为目前到起点距离最短的点
            vis[tmp] = 1;
            cout << "tmp:" << tmp << endl;
            for (int j = head[tmp]; j != -1; j = edge[j].nxt) {
                //用tmp更新到其他点的距离
                int to = edge[j].to;
                int val = edge[j].val;
                if (dist[to] > dist[tmp] + val)
                    dist[to] = dist[tmp] + val;
            }
        }
}


int main5() {

    cin >> n >> m;
    init();
    for (int i = 0; i < m; ++i) {
        int u, v, w;
        cin >> u >> v >> w;
        add_edge(u, v, w);
        add_edge(v, u, w);
    }
    dijkstra(0);
    for (int i = 0; i < n; ++i) {
        cout << dist[i] << " ";
    }
    cout << endl;
    return 0;
}

 */
/*
 3 3
0 1 1
0 2 12
1 2 9


5 7
0 1 2
0 2 4
1 2 1
1 3 1
2 3 4
1 4 7
4 3 3
 */
