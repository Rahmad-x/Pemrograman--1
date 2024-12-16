ordo=int(input(""))

matriks_A=[]
matriks_B=[]
#meminta user menginput isi dari matriks A

#for i in range(ordo):
#    baris_matriks = []
#    for j in range(ordo):
#        elemen = int(input(" "))
#        baris_matriks.append(elemen)
#    matriks_A.append(baris_matriks)
##meminta user menginput isi dari matriks B
#for i in range(ordo):
#    baris_matriks = []
#    for j in range(ordo):
#        elemen = int(input(" "))
#        baris_matriks.append(elemen)
#    matriks_B.append(baris_matriks)
for i in range(ordo):
    baris_matriks = list(map(int, input().split()))  # Membaca input satu baris dan mengubahnya menjadi list of integers
    matriks_A.append(baris_matriks)
for i in range(ordo):
    baris_matriks = list(map(int, input().split()))  # Membaca input satu baris dan mengubahnya menjadi list of integers
    matriks_B.append(baris_matriks)


#operasi perkalian

hasil=[]
for i in range(ordo):
    baris_hasil =[]
    for j in range(ordo):
        perkalian=0
        for k in range(ordo):
            perkalian+=matriks_A[i][k]*matriks_B[k][j]
        baris_hasil.append(perkalian)
    hasil.append(baris_hasil)

#output
for row in hasil :
    print(row)

