from cs50 import get_int

print("Hello world")


def DoMeow(time, name):
    for i in range(time):
        print(f"meow, {name}")


times = int(input("Enter how many times you want me to meow: "))

DoMeow(times, "harry")