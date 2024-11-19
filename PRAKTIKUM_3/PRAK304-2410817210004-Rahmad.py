angka = int(input("Masukkan angka: "))
if angka == 0:
    print( f"{angka} adalaha nol")

elif angka < 10 and angka >0:
    print( f"{angka} adalah satuan")

elif angka>10 and angka < 20:
    print( f"{angka} adalah belasan")

elif angka==10 or angka>20 and angka < 100:
    print( f"{angka} adalah puluhan")

else:
    print( f"{angka} adalah ratusan )atau lebih")


