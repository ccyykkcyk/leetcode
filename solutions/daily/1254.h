#include <vector>

using ::std::vector;

class Solution {
  private:
    void dfs(int r, int c, vector<vector<int>> &grid) {
        int nr = grid.size();
        int nc = grid[0].size();
        grid[r][c] = 1;
        if (r - 1 >= 0 && grid[r - 1][c] == 0)
            dfs(r - 1, c, grid);
        if (r + 1 < nr && grid[r + 1][c] == 0)
            dfs(r + 1, c, grid);
        if (c - 1 >= 0 && grid[r][c - 1] == 0)
            dfs(r, c - 1, grid);
        if (c + 1 < nc && grid[r][c + 1] == 0)
            dfs(r, c + 1, grid);
    }
    void prepare(vector<vector<int>> &grid) {
        int nr = grid.size();
        int nc = grid[0].size();
        for (int r = 0; r < nr; ++r) {
            for (int c = 0; c < nc; ++c) {
                if ((r == 0 || c == 0 || r == (nr - 1) || c == (nc - 1)) &&
                    grid[r][c] == 0) {
                    dfs(r, c, grid);
                }
            }
        }
    }

  public:
    int closedIsland(vector<vector<int>> &grid) {
        prepare(grid);
        int nr = grid.size();
        int nc = grid[0].size();
        int islands = 0;
        for (int r = 1; r < nr - 1; ++r) {
            for (int c = 1; c < nc - 1; ++c) {
                if (grid[r][c] == 0) {
                    islands++;
                    dfs(r, c, grid);
                }
            }
        }
        return islands;
    }
};