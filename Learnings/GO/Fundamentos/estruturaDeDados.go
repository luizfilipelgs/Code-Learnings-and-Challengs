package main

import "fmt"

func main() {
	carro1 := Carro{Modelo: "Fusca", Ano: 1970}
	carro1.Andar()
}

type Carro struct {
	Modelo string
	Ano int
}

func (c Carro) Andar() {
	fmt.Println("O", c.Modelo, "está andando")
}