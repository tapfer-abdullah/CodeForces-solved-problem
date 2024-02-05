
capacity =0
oldPassenger =0

a =[]
b=[]
n = int(input())

for i in range (0, n):
    inputString = input()
    inputIntList = inputString.split(" ")
    a.insert(i, int(inputIntList[0]))
    b.insert(i, int(inputIntList[1]))

    oldPassenger = oldPassenger-a[i]+b[i]
    if capacity < oldPassenger: 
        capacity = oldPassenger

print(capacity)


