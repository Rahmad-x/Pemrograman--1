N = int(input("masukan N : "))
k = int(input("masukan kelipatan : "))

hasil=0
hasilakhir=0
for i in range(1,N+1,+1):
    hasil+=i*k
    hasilakhir+=hasil
    print(f"({i}*{k})",end="")
    for j in range(i-1,0,-1):
        print(f"({j}*{k})",end="")
    print(f" = {hasil}")
print(f" = {hasilakhir}")