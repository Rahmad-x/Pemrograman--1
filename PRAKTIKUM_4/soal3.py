pertama=int(input("masukan angak pertama :"))
kedua=int(input("masukan angak kedua :"))
if pertama>kedua:
    for i in range(pertama,kedua-1,-1):
     print("-",i,end=" ")
     for j in range(kedua,pertama+1):
        print(j,end=" ")
        kedua=kedua+1
        break
elif pertama<kedua :
    for i in range(pertama,kedua+1,+1):
     print("-",i,end=" ")
     for j in range(kedua,pertama-1,-1):
        print(j,end=" ")
        kedua=kedua-1
        break