#include <iostream>
#include <vector>
#include <queue>
using namespace std;
vector <int>v[10];
void bfs(int source,int n)
{
    queue <int>q;
    int visited[n+1]= {0};
    int level[n+1];
    int parent[n+1];
    q.push(source);
    visited[source]=1;
    level[source]=0;
    while(!q.empty())
    {
        int u=q.front();
        for(int i=0; i<v[u].size(); i++)
        {
            int m=v[u][i];
            if(!visited[m])
            {
                level[m]=level[u]+1;
                visited[m]=1;
                parent[m]=u;
                q.push(m);
            }

        }
        q.pop();

    }
    for(int i=1; i<=n; i++)
        cout<<source<< "  to "<<i<< "  distance is: "<<level[i]<<endl;


}
int main()
{

    v[1].push_back(2);
    v[1].push_back(4);
    v[1].push_back(3);
    v[2].push_back(6);
    v[3].push_back(7);
    v[3].push_back(8);
    v[4].push_back(7);
    v[4].push_back(1);
    v[6].push_back(10);
    v[6].push_back(2);
    v[7].push_back(8);
    v[7].push_back(3);
    v[7].push_back(9);
    v[7].push_back(4);
    v[8].push_back(3);
    v[8].push_back(7);
    v[8].push_back(5);
    v[5].push_back(10);
    v[5].push_back(8);
    v[10].push_back(9);
    v[10].push_back(5);
    v[10].push_back(6);
    v[9].push_back(7);
    v[9].push_back(10);
    bfs(1,10);

    return 0;
}
