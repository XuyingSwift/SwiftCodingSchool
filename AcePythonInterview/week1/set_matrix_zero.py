
def setZeroes(matrix):
    if not matrix:
        return

    rows, cols = len(matrix), len(matrix[0])
    first_row_has_zero = False
    first_col_has_zero = False

    # Check if first row has a zero
    for j in range(cols):
        if matrix[0][j] == 0:
            first_row_has_zero = True
            break

    # Check if first column has a zero
    for i in range(rows):
        if matrix[i][0] == 0:
            first_col_has_zero = True
            break

    # Use first row and column as markers, set marker to 0 if there is a 0 in the row or column
    for i in range(1, rows):
        for j in range(1, cols):
            if matrix[i][j] == 0:
                matrix[0][j] = 0
                matrix[i][0] = 0

    # Iterate over the matrix again and using the first row and column markers, update the elements.
    for i in range(1, rows):
        for j in range(1, cols):
            if matrix[0][j] == 0 or matrix[i][0] == 0:
                matrix[i][j] = 0

    # Update the first row if there was any zero
    if first_row_has_zero:
        for j in range(cols):
            matrix[0][j] = 0

    # Update the first column if there was any zero
    if first_col_has_zero:
        for i in range(rows):
            matrix[i][0] = 0

# Example usage
matrix = [
    [1, 1, 1],
    [1, 0, 1],
    [13, 14, 15]
]

setZeroes(matrix)

for row in matrix:
    print(row)

