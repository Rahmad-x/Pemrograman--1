batas=int(input(""))
bilangan=[]
hasilkali=[]

bilangan = list(map(int, input("").split()))
for i in range(batas):
    hasilkali.append(bilangan[i]*(i+1))
for i in range(batas):
    print(f"{hasilkali[i]}",end=" ")