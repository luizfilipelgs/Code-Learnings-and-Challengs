const express = require('express');
const app = express();
const port = 3005;

const config = {
  host   : 'db',
  user   :  'root',
  password : 'password',
  database : 'nodedb'
};

const mysql = require('mysql');
const connection = mysql.createConnection(config);

/* const sql = `INSERT INTO people(name) VALUES('Luiz')`;
connection.query(sql, (error, results, fields) => {
  if (error) {
    console.error(error);
  } else {
    console.log('Registro inserido com sucesso!' + results.insertId);
  }
  connection.end();
}); */

const sqlGetId = `SELECT name FROM people WHERE id = 1`;
let name = ''
connection.query(sqlGetId, (error, results, fields) => {
  if (error) {
    console.error(error);
  } else {
    console.log('Registro inserido com sucesso! ' + results[0].name);
    name = results[0].name
  }
  connection.end();
});

app.get('/', (req, res) => {
  res.send('Hello ' + name);
})

app.listen(port, () => {
  console.log(`Servidor rodando em http://localhost:${port}/`);
});
