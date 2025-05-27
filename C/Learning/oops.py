import math

class Point:
    def __init__(self, x, y):
        self.x = x
        self.y = y

    def calculate_distance(self):
        return math.sqrt(self.x * self.x + self.y +self.y)

if __name__ == "__main__":
    p = Point(1,2)
    print(p.calculate_distance()) 