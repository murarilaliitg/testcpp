/*
Given an n x n grid containing only values 0 and 1, where 0 represents water and 1 represents land, find a water cell such that its distance to the nearest land cell is maximized, and return the distance. If no land or water exists in the grid, return -1.

The distance used in this problem is the Manhattan distance: the distance between two cells (x0, y0) and (x1, y1) is |x0 - x1| + |y0 - y1|.

 

Example 1:


Input: grid = [[1,0,1],[0,0,0],[1,0,1]]
Output: 2
Explanation: The cell (1, 1) is as far as possible from all the land with distance 2.
Example 2:


Input: grid = [[1,0,0],[0,0,0],[0,0,0]]
Output: 4
Explanation: The cell (2, 2) is as far as possible from all the land with distance 4.
 

Constraints:

n == grid.length
n == grid[i].length
1 <= n <= 100
grid[i][j] is 0 or 1
*/

#include<iostream>
#include<vector>
#include<queue>

using namespace std;
int row[]={1,-1,0,0};
int col[]={0,0,1,-1};
class Solution {
public:
     
    int maxDistance(vector<vector<int>>& grid) {
        int gridSize=grid.size();
        queue<pair<int,int>>q;
        for(int i=0;i<gridSize;i++)
        {
            for(int j=0;j<gridSize;j++)
            {
                if(grid[i][j]==1)
                {
                    q.push({i,j});
                }
            }
            
        }
        int maxDist=-1;
        if(q.size()==gridSize*gridSize) return -1;
        while(q.empty()==false)
        {
            int sz=q.size();
            for(int k=0;k<sz;k++)
            {
                int x=q.front().first;
                int y=q.front().second;
                q.pop();
                for(int z=0;z<4;z++)
                {
                    int i=x+row[z];
                    int j=y+col[z];
                    if(i>=0 && i<gridSize && j>=0 && j<gridSize && grid[i][j]==0)
                    {
                        grid[i][j]=1;
                       // cout<<i<<" "<<j<<" "<<grid[i][j]<<endl;
                       q.push({i,j});
                    }
                }

            }
            maxDist++;
            //cout<<maxDist<<endl;
        }
        return maxDist;
    }
};
int main()
{
	int gridSize; cin>>gridSize;
	vector<vector<int>>grid(gridSize,vector<int>(gridSize));
	for(int i=0;i<gridSize;i++)
	{
		for(int j=0;j<gridSize;j++)
		{
			cin>>grid[i][j];
		}
	}
	Solution obj;
	cout<<obj.maxDistance(grid)<<endl;
	return 0;
}
