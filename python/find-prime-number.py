import sys

limit = int(sys.argv[1])

count = 1
primeList = [2]
print(2)
i = 3

while True:
    if count < limit:
        print(primeList)
        for j in primeList:
            if (i % j) == 0:
                break
            primeList.append(i)
            print(i)
            count += 1
            break
        i += 1
    else:
        break
