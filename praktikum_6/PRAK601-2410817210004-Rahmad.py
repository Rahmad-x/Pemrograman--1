baris=int(input())
kolom=int(input())

matriks=[]
bilangan = list(map(int, input("").split()))
index=0
for i in range(baris):
    baris_matriks = bilangan[index:index + kolom]
    matriks.append(baris_matriks)
    index+=kolom    
    ##for j in range(kolom):
    ##    elemen = int(input(" "))
    ##    baris_matriks.append(elemen)
    ##matriks.append(baris_matriks)
print("\n matriks yang diinput : ")
for row in matriks :
    print(row)
