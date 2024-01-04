#include<iostream>
#include <queue>

struct Graph
{
	int v;	 
	int dist; 
};


int bfs(int move[], int N)
{
	
	bool *visited = new bool[N];
	for (int i = 0; i < N; i++)
		visited[i] = false;


	std :: queue<Graph> q;

	visited[0] = true;
	Graph s = {0, 0}; 
	q.push(s); 

	
	Graph qe; 
	while (!q.empty())
	{
		qe = q.front();
		int v = qe.v;

	
		if (v == N-1)
			break;

	
		q.pop();
		for (int j=v+1; j<=(v+6) && j<N; ++j)
		{

			if (!visited[j])
			{
				
				Graph a;
				a.dist = (qe.dist + 1);
				visited[j] = true;

				
				if (move[j] != -1)
					a.v = move[j];
				else
					a.v = j;
				q.push(a);
			}
		}
	}

	
	return qe.dist;
}


int main()
{
	
	int nr;
    int board[100];
	std :: fill_n (board, 100, -1);
    
    std :: cin >> nr;

    for(int i = 0; i < nr; i++)
    {
        int a, b;
        std :: cin >> a >> b;
        board[a] = b;

    }
   
	std :: cout << "Minimum Dice throws required is " << bfs(board, 100);
	
}
