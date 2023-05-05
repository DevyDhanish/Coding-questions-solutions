
def rotate(matrix:list[list[int]]) -> None:
    length = len(matrix)

    for i in range(0,len(matrix)):
        for j in range(i + 1,len(matrix[i])):
            matrix[i][j], matrix[j][i] = matrix[j][i], matrix[i][j]

    for i in range(0, length):
        matrix[i] = matrix[i][::-1]
    
    print(matrix)


rotate([[1,2,3,],[4,5,6],[7,8,9]])
