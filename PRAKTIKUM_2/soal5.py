from math import sqrt
a=float(input("masukan nilai sisi tegak segitiga : "))
b=float(input("masukan nilai sisi miring segitiga : "))
alas=sqrt((b*b)-(a*a))
keliling=a+b+alas
luas=0.5*alas*a
print(f"Alas = {alas:.0f} cm\nTinggi = {a:.0f} cm\nKeliling = {keliling:.0f} cm\nLuas = {luas:.0f} cm^2")