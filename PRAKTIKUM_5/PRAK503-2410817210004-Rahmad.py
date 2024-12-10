def maximal(a, b):
    max=a
    if b>max:
        max =b
    return max
def minimal(a,b):
    min=a
    if b<min:
        min=b
    return min
batas=0
bilangan=int(input())
a=list(map(int, input().split()))
if len(a)!=bilangan:
    print("jumlah bilangan yang dimasukan tidak sesui jumlah yang diinput")
else :
    maks=-100000    
    minim=10000
    while batas<bilangan:
        nilai=a[batas]
        maks = maximal(maks, nilai)
        minim= minimal(minim, nilai)
        batas=batas+1
print(maks,minim)