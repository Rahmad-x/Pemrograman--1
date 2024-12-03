batas = int(input('masukan batas maksimal :'))

for i in range(batas) :
    if i%2!=0:
        print(i,end=" ")
print()
j=batas
for j in range(batas,0,-1):
    if j%2==0:
        print(j,end=" ")