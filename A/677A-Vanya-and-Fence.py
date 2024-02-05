
total_width = 0
inputString = input()
inputIntList = inputString.split(" ")
n= int(inputIntList[0])
h= int(inputIntList[1])

a = input()
aList = a.split(" ")

for i in aList:
    if int(i)>h:
        total_width+=2
    else:
        total_width+=1

print(total_width)

    



