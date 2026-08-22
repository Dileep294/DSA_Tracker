class Solution {

    boolean row(int[][] mat, int i, int tar, int skipJ) {
        for (int j = 0; j < 9; j++) {
            if (j != skipJ && mat[i][j] == tar) {
                return false;
            }
        }
        return true;
    }

    boolean col(int[][] mat, int j, int tar, int skipI) {
        for (int i = 0; i < 9; i++) {
            if (i != skipI && mat[i][j] == tar) {
                return false;
            }
        }
        return true;
    }

    boolean mt(int[][] mat, int i, int j, int tar) {

        // Find starting position of 3x3 box
        int startRow = (i / 3) * 3;
        int startCol = (j / 3) * 3;

        for (int k = startRow; k < startRow + 3; k++) {
            for (int p = startCol; p < startCol + 3; p++) {

                // Skip the current cell itself
                if (!(k == i && p == j) && mat[k][p] == tar) {
                    return false;
                }
            }
        }

        return true;
    }

    public boolean isValid(int[][] mat) {

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {

                if (mat[i][j] != 0) {

                    int tar = mat[i][j];

                    if (!row(mat, i, tar, j) ||
                        !col(mat, j, tar, i) ||
                        !mt(mat, i, j, tar)) {

                        return false;
                    }
                }
            }
        }

        return true;
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna