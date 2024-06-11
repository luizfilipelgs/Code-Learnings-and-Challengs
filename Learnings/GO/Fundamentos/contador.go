package main
import (
	"fmt" 
	"time"
)

func main() { //thread 1
	go contador(10) //thread 2
	go contador(10) //thread 3
	contador(10)
}

func contador(qtd int) {
	for i := range qtd {// range fornece index e o valor
		fmt.Println(i)
		time.Sleep(time.Second)
	}
}

