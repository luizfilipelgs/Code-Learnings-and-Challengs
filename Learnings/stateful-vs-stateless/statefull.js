const express = require('express');
const session = require('express-session');

const app = express();

app.use(session({
  secret: 'chave_secreta',
  resave: false,
  saveUninitialized: true,
  cookie: { secure: false }, // Usar true em produção com HTTPS
}));

app.get('/', (req, res) => {
  if (!req.session.views) {
    req.session.views = 1;
  } else {
    req.session.views++;
  }
  res.send(`Você visitou esta página ${req.session.views} vezes.`);
});

app.listen(3000, () => console.log('Servidor rodando na porta 3000'));
