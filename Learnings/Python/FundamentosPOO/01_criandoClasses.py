from typing import Union

""" class Car:
  def log_car(self, model: str, year: int, color:str) -> None:
    print(f"{model} do Ano: {year} na Cor: {color}")


carro_01 = Car()

carro_01.log_car('BYD King', 2025, 'blue') """


# Método Construtor/Inicializador

class Car_2:
  def __init__(self, model: str, year: int, color:str, price: Union[float, int]) -> None:

    if year < 1886:
      raise ValueError("O ano deve ser 1886 ou mais recente.")
    if price <= 0:
      raise ValueError("O preço deve ser maior que zero.")
    self.model = model
    self.year = year
    self.color = color
    self.price = price

    self.max_speed = 300
  def __str__(self):
    return f"Car(model={self.model}, year={self.year}, color={self.color}, price={self.price}, max_speed={self.max_speed})"
  def log(self):
    print(self)

new_car  = Car_2('BYD King', 2025, 'blue', 150000)
new_car.log()
