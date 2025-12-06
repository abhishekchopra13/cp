A = [9, 4, 3, 7, 7]
A = [1, 2, 3]
# A = [2, 5, 4, 5, 5]

towers = []

for i in range(0, len(A)):
    towers.append([A[i], i])

towers = sorted(towers)

for i in range(0, len(towers)):
    towers[i][0] -= i + 1

for i in range(len(towers) - 2, -1, -1):
    towers[i][0] = min(towers[i][0], towers[i+1][0])

final_towers = [0] * len(towers)
for i in range(0, len(towers)):
    final_towers[towers[i][1]] = towers[i][0] + i + 1
print(final_towers)

# print(sum_of_heights + sum(A))
# print(sum_of_heights)