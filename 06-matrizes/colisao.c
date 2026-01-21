#include <stdio.h>

int main() {
    int n, m; 
    scanf("%d %d", &n, &m);
    
    int mat[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d ", &mat[i][j]);
        }
    }
    
    int c; 
    scanf("%d ", &c);
    
    char inst[c]; 
    for (int i = 0; i < c; i++) {
        scanf("%c ", &inst[i]);
    }

    int x, y; 
    scanf("%d %d", &x, &y);
    for (int i = 0; i < c; i++) {
        char dir = inst[i];
        int nx, ny;
        if (dir == 'D') {
            nx = x, ny = y+1;
        } else if (dir == 'E') {
            nx = x, ny = y-1;
        } else if (dir == 'C') {
            nx = x-1, ny = y;
        } else if (dir == 'B') {
            nx = x+1, ny = y;
        }
        if ((nx >= 0) && (ny >= 0) && (nx < n) && (ny < m) && (mat[nx][ny] == 1)) {
            x = nx;
            y = ny;
        }
    }
    printf("(%d,%d)", x, y);
}