class Solution:
    def transpose(self, matrix: List[List[int]]) -> List[List[int]]:
        rows = len(matrix)
        cols = len(matrix[0])

        T = []

        for i in range(cols):
            row = []

            for j in range(rows):
                row.append(matrix[j][i])

            T.append(row)

        return T