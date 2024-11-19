a=int(input("masukan angka acak pertama : "))
b=int(input("masukan angka acak Ke-dua : "))
c=int(input("masukan angka acak ke-tiga : "))
if a<b & a<c:
    if b<c :
        print(f"{a}, {b}, {c}")
    else :
        print(f"{a}, {c}, {b}")
elif b<a & b<c:
    if a<c :
        print(f"{b}, {a}, {c}")
    else :
        print(f"{b}, {c}, {a}")
else :
    if b<a :
        print(f"{c}, {b}, {a}")
    else :
        print(f"{c}, {a}, {b}")
