def MaxbBilangan(a, b, c, d):
    max = a
    if b>max :
        max = b
    if c>max :
        max =c
    if d>max :
        max =d
    return max
a, b, c, d = input().split()
a = int(a)
b = int(b)
c = int(c)
d = int(d) 
hasil=MaxbBilangan(a, b, c, d)
print(hasil)