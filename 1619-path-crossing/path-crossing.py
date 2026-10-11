class Solution(object):
    def isPathCrossing(self, path):
        coordinate = [0,0]
        coordinates = []
        coordinates.append(coordinate)
        x = 0
        y = 0

        for i in path:
            if i == "N":
                y = y+ 1
                coordinate = [x,y]
                coordinates.append(coordinate)
            elif i == "E":
                x = x + 1
                coordinate = [x,y]
                coordinates.append(coordinate)
            elif i == "W":
                x = x - 1
                coordinate = [x,y]
                coordinates.append(coordinate)
            elif i == "S":
                y = y - 1
                coordinate = [x,y]
                coordinates.append(coordinate)


        for j in range(0, len(coordinates)):
            if coordinates.count(coordinates[j]) > 1:
                output = True
                break
            elif coordinates.count(coordinates[j]) <= 1 and j == len(coordinates) -1:
                output = False
            else:
                continue

        return output
        