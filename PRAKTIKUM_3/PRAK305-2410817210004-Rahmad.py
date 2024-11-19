import math
a=int(input("masukan waktu dalam format detik :"))
if a>=86400 :
    hari = a//86400
    jam=(a%86400)//3600
    menit=((a%86400)%3600)//60
    detik =a%60
    print(f"{hari:.0f} hari : {jam:.0f} jam : {menit:.0f} menit : {detik:.0f} : detik")
else :
    jam= a//3600
    menit=(a%3600)//60
    detik =a%60
    print(f"{jam:.0f} jam : {menit} menit : {detik:.0f} : detik")
 