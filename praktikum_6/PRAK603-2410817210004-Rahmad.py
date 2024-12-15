baris=int(input())
kolom=int(input())
if baris!=kolom:
    print('jumlah tidak sama')
else :
    matriks=[]

    for i in range(2):
        baris_matriks = []
        for j in range(kolom):
            elemen = int(input(" "))
            baris_matriks.append(elemen)
        matriks.append(baris_matriks)
    hasil=[]
    for i in range(1):
        for j in range(kolom):
            hasil.append(matriks[i][j]*matriks[i+1][j])

for row in hasil :
    print(row ,end=" ")
