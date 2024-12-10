def biodata(tahunlahir, nama, asal):
    tahun_sekarang=2020
    usia=tahun_sekarang-tahunlahir
    print("perkenalkan nama saya : ",nama)
    print("Umur saya : ",usia,"tahun")
    print("Saya adalah angkatan  : ",tahun_sekarang)
    print("Asal saya dari : ",asal)
tahunlahir=int(input())
A=str(input())
B=str(input())
biodata(tahunlahir, A, B)