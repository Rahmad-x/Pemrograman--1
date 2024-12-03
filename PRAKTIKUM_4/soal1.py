x = int(input('masukan kelipatan yang mua dirubah :'))
y = str(input('masukan simbol :'))
for i in range(51):
    if i%x==0 :
        print(y,end = "")
    else :
        print(f" {i:.0f} ",end="")