class Car:
    def __init__(self) -> None:
        print("Hello")
    
    def car_name(carname):
        print(carname)
    
    def __del__(self):
        print("Goodbye")
    def __str__(self) -> str:
        return "a car object"



car1 = Car()
Car.car_name("Bolvo")
Car.car_name("BMW")
print(car1)