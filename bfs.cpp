
/*
Experiment 13 : Represent a given grapg using adjacency matrix/list to perform DFS and using adjacency list to perform BFS. 
                Use the map of the area around the college as a graph. Identify the prominent land marks as nodes and perform DFS and BFS on that.
Adjacency Matrix : using adj matrix -BFS(Que)
*/

#include <iostream>
#include <stdlib.h>
using namespace std;

int cost[10][10], i, j, k, n, qu[10], front, rear, v, visit[10], visited[10];
int stk[10], top, visit1[10], visited1[10];

class GT 
{
public:
    void create();
    void bfs();
    void dfs();
};

void GT::create()
{
int m;
            cout << "Enter number of vertices : ";
            cin >> n;
            cout << "Enter number of edges : ";
            cin >> m;
    
            cout << "\nEDGES :\n";
                for (k = 1; k <= m; k++)
                    {
                        cin >> i >> j;
                        cost[i][j] = 1;
                        cost[j][i] = 1;
                     }
    
    //display function
             cout << "The adjacency matrix of the graph is : " << endl;
                  for (i = 0; i < n; i++)
                    {
                        for (j = 0; j < n; j++)
                        {
                            cout << " " << cost[i][j];
                        }
                   cout << endl;
                }

}            
void GT::bfs()
{
            cout << "Enter initial vertex : ";
            cin >> v;
            cout << "The BFS of the Graph is\n";
            cout << v<<endl;
            visited[v] = 1;
            k = 1;
            while (k < n)
            {
                for (j = 1; j <= n; j++)
                    if (cost[v][j] != 0 && visited[j] != 1 && visit[j] != 1)
                        {
                            visit[j] = 1;
                            qu[rear++] = j;
                        }
                v = qu[front++];
                cout << v << " ";
                k++;
                visit[v] = 0;
                visited[v] = 1;
            }

}
void GT::dfs()
{
            cout <<endl<<"Enter initial vertex : ";
            cin >> v;
            cout << "The DFS of the Graph is\n";
            cout << v<<endl;
            visited[v] = 1;
             k = 1;
            while (k < n)
             {
                for (j = n; j >= 1; j--)
                    if (cost[v][j] != 0 && visited1[j] != 1 && visit1[j] != 1)
                    {
                        visit1[j] = 1;
                        stk[top] = j;
                         top++;
                    }
                     v = stk[--top];
                    cout << v << " ";
                    k++;
                    visit1[v] = 0;
                    visited1[v] = 1;
            }

}

int main()
{
int choice;
GT gt;
      
    while(1)
    {
  
        cout << "-----------------" << endl;
        cout << "BFS & DFS representation" << endl;
        cout << "-----------------" << endl;
        cout << "1.CREATE" << endl;
        cout << "2.BFS" << endl;
        cout << "3.DFS" << endl;
        cout << "4.Quit" << endl;
        cout << "Enter your choice : ";
        cin >> choice;
        switch (choice)
        {
        
        case 1:
           gt.create();
           break;
        case 2:
           gt.bfs();
            break;    
        case 3:
            gt.dfs();
           
            break;
        case 4:
            cout << "Thanks for using this program!!!";
            exit(1);
        default:
            cout << "Wrong choice!!!" << endl;
        }
    }
    return 0;
}
    
    
    






















