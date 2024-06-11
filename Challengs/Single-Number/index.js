// Você receberá uma lista com numeros iguais e um unico diferente, retorne o numero diferente.

const list1 = [2, 2, 3, 2]
const list2 = [3, 3, 3, 4]
const list3 = [1, 2, 4, 1, 2, 1, 2]

// 1º resolução: Varios iguais e um diferente

const resolve =(list) => {
  let indexDiferent = []
  let count = 0

  list.forEach((item, index) => {
    console.log('item inicial ', list[0], 'item do lopp: ', item )
    if( list[0] !== item ) {
      indexDiferent.push(index)
    }
  })

  console.log('lista de index: ', indexDiferent)
  return list[indexDiferent[0]]
 
}

console.log('Numero Unico é: ', resolve( list3))
// console.log('Numero Unico é: ', resolve( list2))

/* --------------------------------------------------------------------------------- */
