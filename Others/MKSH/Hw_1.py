#2026/10
import math
def check(a, b, c):
    return (a + b > c and a + c > b and b + c > a)
    
def d(x1, y1, x2, y2):
    return math.sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2))
''' 
#海龍
def A(a, b, c):
    s = (a + b + c) / 2
    return math.sqrt(s * (s - a) * (s - b) * (s - c))
'''
#鞋帶 (時間/空間複雜度較優)
def S(x1, y1, x2, y2, x3, y3):
    return 0.5 * abs(x1*y2 + x2*y3 + x3*y1 - (y1*x2 + y2*x3 + y3*x1))
    
x1, y1 = map(int, input("輸入座標1 : ").split())
x2, y2 = map(int, input("輸入座標2 : ").split())
x3, y3 = map(int, input("輸入座標3 : ").split())

a = d(x1, y1, x2, y2)
b = d(x2, y2, x3, y3)
c = d(x3, y3, x1, y1)

if check(a, b, c):
    print(f"面積為 : {S(x1, y1, x2, y2, x3, y3):.1f}\n")
else:
    print("三角形不合\n")
