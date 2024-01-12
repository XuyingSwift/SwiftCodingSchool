def dig(mat):
    result = []
    for i in range(len(mat)):
        for j in range(len(mat[0])):
            if i == j:
                result.append(mat[i][j])
    return result

def toeplitz_matrix(mat):
    rows = len(mat) - 1
    cols = len(mat) - 1

    for i in range(rows):
        for j in range(cols):
            if mat[i][j] != mat[i + 1][j + 1]:
                return False
    return True

mat = [[1, 2, 3],
       [4, 5, 6],
       [7, 8, 9]]

mat2 = [[1,1],
        [1,1]]

print(dig(mat))
print(toeplitz_matrix(mat))
print(toeplitz_matrix(mat2))
