package main

import (
	"fmt"
	"time"
)


func worker(workerID int, data chan int) {
	for x := range data {
		fmt.Printf("worker %d recebeu %d\n", workerID, x)
		time.Sleep(time.Second)
	}
}

func main() {
	canal := make(chan int)
	qtdWorkers := 10

	for i := range qtdWorkers {
		go worker(i, canal)
	}

	for i := range 100 {
		canal <- i
	}
}


