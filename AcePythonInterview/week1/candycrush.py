# find the consective candies
def find_candies(matrix):
    positions = set()
    rows = len(matrix)
    cols = len(matrix[0])

    for i in range(rows):
        for j in range(cols - 2):
            if matrix[i][j] == 0:
                continue
            if matrix[i][j] == matrix[i][j+1] == matrix[i][j+2]:
                positions.add((i, j))
                positions.add((i, j + 1))
                positions.add((i, j + 2))

    for j in range(cols):
        for i in range(rows -2):
            if matrix[i][j] == 0:
                continue
            if matrix[i][j] == matrix[i+1][j] == matrix[i+2][j]:
                positions.add((i,j))
                positions.add((i+1, j))
                positions.add((i+2, j))

    return positions

def crash(matrix, positions):
    for r, c in positions:
        matrix[r][c] = 0

def drop(matrix):
    # it iterates over each column from the bottom up, moving none zero candies downwards to empty spaces
    # it uses lowest_zero to keep track the lowest empty space in each column and swaps non-zero candies down this this positions
    rows = len(matrix)
    cols = len(matrix[0])
    lowest_zero = -1 # starting from the bottom row

    for c in range(cols):
        for r in reversed(range(rows)):
            if matrix[r][c] == 0:
                lowest_zero = max(lowest_zero, r)
            elif lowest_zero >= 0: # not zero but bottom is zero
                matrix[r][c], matrix[lowest_zero][c] = matrix[lowest_zero][c], matrix[r][c]
                lowest_zero -= 1

def candy_crash(matrix):
    crash_set = find_candies(matrix)
    while crash_set:
        crash(matrix, crash_set)
        drop(matrix)
        crash_set = find_candies(matrix)

    return matrix


mat1 = [[1, 1, 1, 0, 2],
        [3, 3, 1, 0, 1]]
p1 = find_candies(mat1)
crash(mat1, p1)
print(mat1)

mat2 = [[1, 0, 2],
        [1, 1, 3],
        [1, 2, 1]]
p2 = find_candies(mat2)
crash(mat2, p2)
print(mat2)

mat3 = [[1,3,5,5,2],
        [3,4,3,3,1],
        [3,2,4,5,2],
        [2,4,4,5,5],
        [1,4,4,1,1]]

print(candy_crash(mat3))
            
