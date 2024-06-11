package main

import "fmt"

func main() {
	arr1 := [5]int{1, 2, 3, 4, 5} // Declara e inicializa um array de inteiros com 5 elementos
	arr2 := [...]int{1, 2, 3, 4, 5} // Declara e inicializa um array, deixando o compilador inferir o tamanho

	slice := []int{1, 2, 3, 4, 5} // Declara e inicializa um slice de inteiros

	fmt.Println("Array 01:", arr1)
	fmt.Println("Array 02:", arr2)
	fmt.Println("slice:", slice)

	for i := 0; i < len(arr1); i++ {
		fmt.Println(arr1[i])
	}

	for index, value := range slice {
		fmt.Printf("Index: %d, Value: %d\n", index, value)
	}

	// Adicionar um único elemento ao slice
	slice = append(slice, 6)
	fmt.Println("Após adicionar um elemento:", slice)

	// Adicionar múltiplos elementos ao slice
	slice = append(slice, 7, 8, 9)
	fmt.Println("Após adicionar múltiplos elementos:", slice)

	// Adicionar outro slice ao slice original
	anotherSlice := []int{10, 11, 12}
	slice = append(slice, anotherSlice...)
	fmt.Println("Após adicionar outro slice:", slice)

	// Criar um sub-slice
	subSlice := slice[1:4]
	fmt.Println("Sub-slice:", subSlice)

	// Tentar adicionar um elemento ao array não é permitido diretamente
    // arr1 = append(arr, 6) // Isso resultaria em um erro de compilação

    // Em vez disso, você pode copiar os elementos para um novo array maior
    var largerArr [10]int
    for i, v := range arr1 {
        largerArr[i] = v
    }
    largerArr[5] = 6
    fmt.Println("Novo array com elemento adicionado:", largerArr)

}



