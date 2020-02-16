#include <iostream>
#include <vector>
using namespace std;
class Edge
{
    public :
    int v = 0;
    int w = 0;
    Edge(int v, int w)
    {
        this->v = v;
        this->w = w;
    }
};
int n = 7;
vector<Edge *> graph[7];

void addEdge(int u, int v, int w)
{
    graph[u].push_back(new Edge(v, w));
    graph[v].push_back(new Edge(u, w));
}
void display()
{
    for (int u = 0; u < 7; u++)
    {
        cout << u << " -> ";
        for (Edge *e : graph[u])
        {
            cout <<"(" << e->v << " ," << e->w << ")";
        }
        cout << endl;
    }
}
void Create_Graph(){
    addEdge(0, 1, 10);
    addEdge(0, 3, 10);
    addEdge(1, 2, 10);
    addEdge(2, 3, 40);
    addEdge(3, 4, 2);
    addEdge(4, 5, 2);
    addEdge(4, 6, 8);
    addEdge(5, 6, 3);
    display();
}
int main()
{
    Create_Graph();
    return 0;
}