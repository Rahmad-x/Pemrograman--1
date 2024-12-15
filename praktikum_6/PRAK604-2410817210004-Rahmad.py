dimiliki=input("")
diterima=input("")

if len(dimiliki)==len(diterima):
    pagar=0
    bintang=0
    for i in range(len(dimiliki)):
        if dimiliki[i]==diterima[i]:
            print("*",end=" ")
            bintang +=1
        else:
            print("#",end=" ")
            pagar +=1
    print(f"\n* = {bintang}\n# = {pagar}")
    if bintang>=pagar:
        print("pesan asli")
    else :
        print("pesan palsu")
else:
    print("Panjang kalimat berbeda, pesan palsu")