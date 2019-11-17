import sys
import time

limit = int(sys.argv[1])
#limit = 10

count = 1
primeList = [2]
#print(primeList)
i = 3
flag = True

startTime = time.time()

while count < limit:
    for j in primeList:
        if (i % j) == 0:
            flag = False
            break

    if flag:
        primeList.append(i)
        #print(primeList)
        count += 1
        
    i += 2
    flag = True

print("time :", time.time() - startTime)
print(primeList[len(primeList)-1])
