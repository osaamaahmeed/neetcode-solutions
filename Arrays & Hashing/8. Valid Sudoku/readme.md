We need to check for 3 things:

1. if (1-9) is repeated in a row:
- loop over the borad board[i][j]

2. if (1-9) is repeated in a column
- loop over the borad board[j][i]

3. if (1-9) is repeated in a 3x3 box
- loop every 3 cells in i and j
    - loop inside on each cell in the box

Time Complixty: O(1)
becase we already know the limit of the 2D matrix which is 9x9

need optimization in sapce