def hitung(nilai1, nilai2):
    selisih=nilai1-nilai2
    if selisih<0:
        return -selisih
    return selisih
def mutlak(angka):
    return abs(angka)
a, c, b, d=input().split()
a= int (a)
b= int (b)
c= int (c)
d= int (d)
Hasil=hitung(a,b)+hitung(c,d)
print(mutlak(Hasil))