while True :
    print("Pilih program \n1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\n5. Exit\n")
    pilihan =int (input("Masukan pilihan : "))
    if pilihan==5:
        print("terimakasih telah menggunaan kalkulator Rahmad :)")
        break
    elif pilihan>=1 and pilihan<=4:
            pertama=int(input('masukan angka pertama : '))
            kedua=int(input('masukan angka kedua : '))
            if pilihan == 1:
                hasil=pertama+kedua
                print(f"Hasil penjumlahan antara {pertama} dengan {kedua} adalah {hasil}\n\n")
            
            elif pilihan==2:
                hasil=pertama-kedua
                print(f"Hasil Pengurangan antara {pertama} dengan {kedua} adalah {hasil}\n\n")
        

            elif pilihan == 3:
                hasil=pertama*kedua
                print(f"Hasil Perkalian antara {pertama} dengan {kedua} adalah {hasil}\n\n")
        
            elif pilihan == 4:
                hasil=pertama/kedua
                print(f"Hasil Pembagian antara {pertama} dengan {kedua} adalah {hasil}\n\n")
    elif pilihan >=6:
            print("inputan anda salah silahkan coba lagi ")