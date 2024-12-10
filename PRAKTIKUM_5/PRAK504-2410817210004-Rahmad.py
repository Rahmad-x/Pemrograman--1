def reverse(A):
    rev_Num=0
    while A!=0:
        remainder=A%10
        rev_Num=rev_Num*10+remainder
        A=A//10
    return rev_Num
A=int(input())
B=int(input())
A=reverse(A)
B=reverse(B)
C=A+B
print(reverse(C))