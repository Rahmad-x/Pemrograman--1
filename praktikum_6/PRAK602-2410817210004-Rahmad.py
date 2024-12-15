batas=int(input(""))
bilangan=[]
hasilkali=[]
i=0
for i in range(batas):
    bilangan.append(int(input("")))
for i in range(batas):
    hasilkali.append(bilangan[i]*(i+1))
for i in range(batas):
    print(f"{hasilkali[i]}",end=" ")