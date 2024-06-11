package main

import "fmt"

func main() { //T1
	canal := make(chan string)

	go func() {
		canal <- "Olá, canal"
	}()

	fmt.Println(<-canal)
}