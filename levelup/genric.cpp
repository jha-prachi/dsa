#include <iostream>

using namespace std;

Node *flatten(Node *node)
{
    vector<Node *> nchild;
    for (Node *n : node->child)
    {
        flatten(n);
        nchild.push_back(n);
        for (Node *child : n->child)
        {
            nchilds.push_back(child);
        }
    }
    node->child=nchild;
}
int main()
{
    return 0;
}