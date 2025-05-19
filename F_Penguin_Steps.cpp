#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9 + 7;
const int MAXN = 305;

int n, r, k;
int a[MAXN][MAXN];
int c[MAXN][MAXN];
bool visited[MAXN][MAXN];

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

// Function to check if a cell is within the grid bounds
bool is_valid(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < n;
}

// Function to compute the minimum cost path using BFS
int bfs(int start_x, int start_y, int target_x, int target_y, int grid[MAXN][MAXN]) {
    vector<vector<int>> dist(n, vector<int>(n, INF));
    deque<pair<int, int>> dq;
    dist[start_x][start_y] = grid[start_x][start_y];
    dq.push_front({start_x, start_y});

    while (!dq.empty()) {
        auto [x, y] = dq.front();
        dq.pop_front();
        for (int dir = 0; dir < 4; ++dir) {
            int nx = x + dx[dir];
            int ny = y + dy[dir];
            if (is_valid(nx, ny)) {
                int cost = max(dist[x][y], grid[nx][ny]);
                if (cost < dist[nx][ny]) {
                    dist[nx][ny] = cost;
                    if (grid[nx][ny] <= dist[x][y])
                        dq.push_front({nx, ny});
                    else
                        dq.push_back({nx, ny});
                }
            }
        }
    }
    return dist[target_x][target_y];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        cin >> n >> r >> k;
        r--; // Adjusting to 0-based indexing

        // Reading the grid values
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                cin >> a[i][j];

        // Reading the grid colors
        for (int i = 0; i < n; ++i) {
            string s;
            cin >> s;
            for (int j = 0; j < n; ++j)
                c[i][j] = s[j] - '0';
        }

        // Compute disM: Mouf's minimal path cost
        int disM = bfs(0, 0, r, n - 1, a);

        // Identify black cells not on Mouf's minimal path
        vector<tuple<int, int, int>> candidates;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (c[i][j] == 1 && a[i][j] < disM) {
                    candidates.emplace_back(a[i][j], i, j);
                }
            }
        }

        // Sort candidates in decreasing order of value
        sort(candidates.rbegin(), candidates.rend());

        int remaining_k = k;
        for (auto& [val, x, y] : candidates) {
            int increment = min(remaining_k, disM - val - 1);
            if (increment > 0) {
                a[x][y] += increment;
                remaining_k -= increment;
                if (remaining_k == 0)
                    break;
            }
        }

        // Compute disF: Fouad's minimal path cost after modifications
        int disF = bfs(n - 1, 0, r, n - 1, a);

        cout << disM << " " << disF << "\n";
    }

    return 0;
}
