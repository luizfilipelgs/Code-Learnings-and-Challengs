const SumNumMaxDigit = (maxDigit: number): number => {
  let num = [];
  let sum = 0;
  let lengthDigit = 4;
  
  for (let i = 0; i < lengthDigit; i++) {
    const digit = Math.floor(Math.random() * maxDigit + 1)
    num.push(digit)
    sum += digit;
  }

  const totalDigit = Number(num.join(''))

  if (sum === 21) return totalDigit
  return SumNumMaxDigit(maxDigit);
}

console.log(SumNumMaxDigit(6));