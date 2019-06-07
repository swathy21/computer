a=input()
digits=0
for i in range(len(a)):
    if(a[i].isdigit()):
        digits=digits+1
print(digits)
