
import pandas as pd
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LinearRegression
from sklearn import metrics
  
""" import mysql.connector

con = mysql.connector.connect(
    host="localhost",
    user="root",
    password="sua_senha",
    database="nome_do_banco_de_dados"
)

query = "SELECT irradiancia, eficiencia, consumo, geracao FROM nome_da_tabela"
df = pd.read_sql_query(query, con)

con.close() """

data = {
    'irradiancia': [300, 330, 270, 450, 312, 320, 280, 420, 470, 290],
    'eficiencia': [1, 1.1, 0.90, 1.5, 1.05, 1.07, 0.91, 1.38, 1.65, 0.94],
    'consumo': [200, 220, 180, 250, 195, 210, 230, 200, 240, 215],
    'geracao': [300, 320, 280, 390, 310, 330, 310, 340, 360, 325]
}

df = pd.DataFrame(data)

X = df[['irradiancia', 'eficiencia', 'consumo']]
y = df['geracao']

X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2, random_state=0)

regressor = LinearRegression()
regressor.fit(X_train, y_train)

y_pred = regressor.predict(X_test)

mae = metrics.mean_absolute_error(y_test, y_pred)

mse = metrics.mean_squared_error(y_test, y_pred)

r2 = metrics.r2_score(y_test, y_pred)

print(f"Previsão de geração de energia: {y_pred}")
print(f"Erro absoluto médio: {mae}")
print(f"Erro quadrático médio: {mse}")
print(f"Coeficiente de determinação R^2: {r2}")
print("Coeficientes do Modelo:")
print("Irradiancia:", regressor.coef_[0])
print("Eficiencia:", regressor.coef_[1])
print("Consumo:", regressor.coef_[2])

