r=float(input("masukan nilai jari-jari : "))
t=float(input("masukan nilai tinggi : "))
phi=3.14
v=phi*r*r*t
l=2*phi*r*(r+t)
k=2*phi*r
print(f"Volume = {v:.2f}\nLuas = {l:.2f}\nkeliling = {k:.2f}")