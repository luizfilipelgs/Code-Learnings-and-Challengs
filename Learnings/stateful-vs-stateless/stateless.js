const express = require('express');
const jwt = require('jsonwebtoken');

const app = express();
const SECRET = 'chave_secreta';

app.use(express.json());

app.post('/login', (req, res) => {
  const { username } = req.body;
  const token = jwt.sign({ username }, SECRET, { expiresIn: '1h' });
  res.json({ token });
});

app.get('/protegido', (req, res) => {
  const token = req.headers.authorization?.split(' ')[1];
  if (!token) return res.status(401).send('Token ausente');

  try {
    const decoded = jwt.verify(token, SECRET);
    res.send(`Bem-vindo, ${decoded.username}`);
  } catch {
    res.status(403).send('Token inválido');
  }
});

app.listen(3000, () => console.log('Servidor rodando na porta 3000'));
