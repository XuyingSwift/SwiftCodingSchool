def rotate_image(matrix):
   return [[matrix[row][col] for row in range(len(matrix))] for col in range(len(matrix[0]))]

def rotateMatrixClockwise(matrix):
    n = len(matrix)
    # Transpose the matrix
    for i in range(n):
        for j in range(i, n):
            matrix[i][j], matrix[j][i] = matrix[j][i], matrix[i][j]
    
    # Reverse each row
    for i in range(n):
        matrix[i].reverse()
    
    return matrix

def reverseColumn(matrix, col_index):
    start = 0 # top of the column
    end = len(matrix) - 1 # bottom of the column

    while start < end:
        # swap the elements at the start and the indexes
        matrix[start][col_index], matrix[end][col_index] = matrix[end][col_index], matrix[start][col_index]

        start += 1
        end -= 1

def rotateMatrixCounterClockwise(matrix):
    n = len(matrix)
    for row in range(n):
        for col in range(row, n):
            matrix[row][col], matrix[col][row] = matrix[col][row], matrix[row][col]
    for i in range(n):
        reverseColumn(matrix, i)
    return matrix

def main():
    m = [[1,2,3], [4,5,6], [7,8,9]]
    #print(rotateMatrixClockwise(m))
    print(rotateMatrixCounterClockwise(m))

main()
