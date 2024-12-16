class Motorcycle:
  def __init__(self, max_speed: int) -> None:
    self.max_speed = max_speed


class Truck:
  def __init__(self, max_speed: int) -> None:
    self.max_speed = max_speed


def log_speed_moto(vehicle: Motorcycle):
  if isinstance(vehicle, Motorcycle):
    print(f"A velocidade máxima do veículo é de {vehicle.max_speed}")
  else:
    raise TypeError("O objeto precisa ser uma motocicleta")

moto_01 = Motorcycle(390)
truck_01 = Truck(120)

log_speed_moto(truck_01)