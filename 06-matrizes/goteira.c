#include <stdio.h>
#include <stdbool.h>

int n, m;
bool vis[1000][1000];
char mat[1000][1000];

bool valid(int x, int y) {
    return x >= 0 && y >= 0 && x < n && y < m && !vis[x][y];
}

void goteira(int x, int y) {
    if (!valid(x, y)) return;
    if (mat[x][y] == '#') return;
    vis[x][y] = true;
    mat[x][y] = 'o';
    if (valid(x+1, y) && mat[x+1][y] == '#') {
        goteira(x, y-1);
        goteira(x, y+1);
    }
    goteira(x+1, y);
}

int main() {
    scanf("%d %d ", &n, &m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%c ", &mat[i][j]);
        }
    }
    int x, y;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (mat[i][j] == 'o') {
                x = i, y = j;
            }
        }
    }

    goteira(x, y);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%c", mat[i][j]);
        }
        printf("\n");
    }
}