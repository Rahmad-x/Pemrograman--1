baris=int(input())
kolom=int(input())

matriks=[]

for i in range(baris):
    baris_matriks = []
    for j in range(kolom):
        elemen = int(input(" "))
        baris_matriks.append(elemen)
    matriks.append(baris_matriks)

print("\n matriks yang diinput : ")
for row in matriks :
    print(row)
