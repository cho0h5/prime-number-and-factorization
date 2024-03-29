package main

import (
	"fmt"
	"os"
	"strconv"
	"time"
)

func main() {
	limit, _ := strconv.Atoi(os.Args[1])

	count := 1
	primeList := []int{2}
	i := 3
	flag := true
	fmt.Println(count)

	startTime := time.Now()

	for count < limit {
		for _, j := range primeList {
			if (i % j) == 0 {
				flag = false
				break
			}
		}

		if flag {
			primeList = append(primeList, i)
			//fmt.Println(primeList)
			count += 1
			fmt.Println(count)
		}

		i += 2
		flag = true
	}

	fmt.Println("time :", time.Since(startTime))
	fmt.Println(primeList[len(primeList)-1])

}
