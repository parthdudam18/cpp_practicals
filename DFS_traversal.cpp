#include <stdio.h>

void DFS(int i);

int G[20][20], visited[20], n;

int main()
{
    int i, j;

    printf("\nEnter the number of vertices: ");
    scanf("%d", &n);

    printf("\nEnter the adjacency matrix of the graph:\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &G[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        visited[i] = 0;
    }

    DFS(0);

    return 0;
}

void DFS(int i)
{
    int j;

    printf("\n%d", i);
    visited[i] = 1;

    for (j = 0; j < n; j++)
    {
        if (!visited[j] && G[i][j] == 1)
        {
            DFS(j);
        }
    }
}


/*PS C:\Parth 203.c\parth> cd "c:\Parth 203.c\parth\" ; if ($?) { gcc DFS_traversal.c -o DFS_traversal } ; if ($?) { .\DFS_traversal }

Enter the number of vertices: 4

Enter the adjacency matrix of the graph:
0 1 1 0
1 0 1 1
1 1 0 0
0 1 0 0

0
1
2
3*/