package main
import "fmt"

func main() {
	
	// Forma longa: declaração com tipagem -> atribuição
	var a int
	a = 1
	fmt.Println("var a = ",a)

	// Forma Curta: declaração + atribuição + inferencia de tipo
	b := 10
	fmt.Println("var b = ",b)

	//obs, uma vez inferido ou declarado, não podemos mudar o tipo: b = "oi"

}