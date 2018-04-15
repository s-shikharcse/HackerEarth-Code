// C++ program to find the shortest path between
// a given source cell to a destination cell.
#include <bits/stdc++.h>
using namespace std;

int n;
int m;

//to store matrix cell cordinates
struct Point
{
    int x;
    int y;
};
 
// An Data Structure for queue used in BFS
struct queueNode
{
    Point pt;  // The cordinates of a cell
    int dist;  // cell's distance of from the source
};
 
// check whether given cell (row, col) is a valid
// cell or not.
bool isValid(int row, int col)
{
    // return true if row number and column number
    // is in range
    return (row >= 0) && (row < n) &&
           (col >= 0) && (col < m);
}
 
// These arrays are used to get row and column
// numbers of 4 neighbours of a given cell
int rowNum[] = {-1, 0, 0, 1};
int colNum[] = {0, -1, 1, 0};
 

int BFS(int *[], Point, Point);


int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    char mat[1005][1005];
    Point source, dest;
    cin>>n>>m;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat[i][j];
            if(mat[i][j]=='V'){
                source.x = i;
                source.y = j;
            }
            if(mat[i][j]=='H'){
                dest.x = i;
                dest.y = j;
            }
        }
    }
 
    int dist = BFS(mat, source, dest);
 
    if (dist != INT_MAX)
        cout << "Shortest Path is " << dist ;
    else
        cout << "Shortest Path doesn't exist";
 
    return 0;
}









// function to find the shortest path between
// a given source cell to a destination cell.
int BFS(int mat[][m], Point src, Point dest)
{
    // check source and destination cell
    // of the matrix have value 1
    if (!mat[src.x][src.y] || !mat[dest.x][dest.y])
        return INT_MAX;
 
    bool visited[m][n];
    memset(visited, false, sizeof visited);
     
    // Mark the source cell as visited
    visited[src.x][src.y] = true;
 
    // Create a queue for BFS
    queue<queueNode> q;
     
    // distance of source cell is 0
    queueNode s = {src, 0};
    q.push(s);  // Enqueue source cell
 
    // Do a BFS starting from source cell
    while (!q.empty())
    {
        queueNode curr = q.front();
        Point pt = curr.pt;
 
        // If we have reached the destination cell,
        // we are done
        if (pt.x == dest.x && pt.y == dest.y)
            return curr.dist;
 
        // Otherwise dequeue the front cell in the queue
        // and enqueue its adjacent cells
        q.pop();
 
        for (int i = 0; i < 4; i++)
        {
            int row = pt.x + rowNum[i];
            int col = pt.y + colNum[i];
             
            // if adjacent cell is valid, has path and
            // not visited yet, enqueue it.
            if (isValid(row, col) && mat[row][col] && 
               !visited[row][col])
            {
                // mark cell as visited and enqueue it
                visited[row][col] = true;
                queueNode Adjcell = { {row, col},
                                      curr.dist + 1 };
                q.push(Adjcell);
            }
        }
    }
 
    //return -1 if destination cannot be reached
    return INT_MAX;
}
 
// Driver program to test above function