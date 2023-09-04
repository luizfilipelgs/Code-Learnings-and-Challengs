// semanas por mês

function getSemanas(ano, mes) {
  const primeiroDiaDoMes = new Date(ano, mes - 1, 1);
  const ultimoDiaDoMes = new Date(ano, mes, 0);
  
  let semanas = [];
  let semanaAtual = [];
  let diaAtual = primeiroDiaDoMes;

  while (diaAtual <= ultimoDiaDoMes) {
      if (semanaAtual.length === 0) {
          semanas.push(semanaAtual);
      }
      semanaAtual.push(new Date(diaAtual));
      if (diaAtual.getDay() === 6 || diaAtual.getDate() === ultimoDiaDoMes.getDate()) {
          semanaAtual = [];
      }
      diaAtual.setDate(diaAtual.getDate() + 1);
  }

  return semanas.map(semana => ({
      inicio: semana[0].toDateString(),
      fim: semana[semana.length - 1].toDateString()
  }));
} 

const ano = 2024;
let mapaManutencao = {};

let totalSemanas = 0; // Counter for total weeks

for (let mes = 1; mes <= 12; mes++) {
  const semanasDoMes = getSemanas(ano, mes);
  mapaManutencao[`Mês ${mes}`] = semanasDoMes;
  totalSemanas += semanasDoMes.length; // Add the number of weeks for the current month
}

console.log(mapaManutencao);
console.log(`Foram contabilizadas ${totalSemanas} semanas ao todo.`);


/* 
// semanas por ano
function getSemanas(ano, mes) {
  const primeiroDiaDoMes = new Date(ano, mes - 1, 1);
  const ultimoDiaDoMes = new Date(ano, mes, 0);
  

  const getWeekNumber = (date) => {
    const d = new Date(date);
    d.setHours(0, 0, 0, 0);
    d.setDate(d.getDate() + 3 - (d.getDay() + 6) % 7);
    const week1 = new Date(d.getFullYear(), 0, 4);
    return 1 + Math.round(((d - week1) / 86400000 - 3 + (week1.getDay() + 6) % 7) / 7);
  };

  let currentWeekNumber = getWeekNumber(primeiroDiaDoMes);
  let semanas = [];
  let semanaAtual = [];
  let diaAtual = primeiroDiaDoMes;

  while (diaAtual <= ultimoDiaDoMes) {
      if (semanaAtual.length === 0) {
          semanas.push({weekNumber: currentWeekNumber, days: semanaAtual});
      }
      semanaAtual.push(new Date(diaAtual));
      if (diaAtual.getDay() === 6 || diaAtual.getDate() === ultimoDiaDoMes.getDate()) {
          semanaAtual = [];
          currentWeekNumber++;
      }
      diaAtual.setDate(diaAtual.getDate() + 1);
  }

  return semanas.map(semana => ({
      semana: semana.weekNumber,
      inicio: semana.days[0].toDateString(),
      fim: semana.days[semana.days.length - 1].toDateString()
  }));
}

const ano = 2023;
let mapaManutencao = {};

for (let mes = 1; mes <= 12; mes++) {
  mapaManutencao[`Mês ${mes}`] = getSemanas(ano, mes);
}

console.log(mapaManutencao);
 */