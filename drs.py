b=input()
counts=0
for i in b:
        if (i.isdigit()!=True and i.isalpha()!=True):
                counts+=1
print(counts)
