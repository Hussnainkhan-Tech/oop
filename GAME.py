import random

print("🎮 Welcome to Number Guessing Game 🎮")
print("Main ne 1 se 10 ke beech ek number socha hai")

number = random.randint(1, 10)

guess = int(input("Apna guess likho: "))

if guess == number:
    print("🎉 Mubarak ho! Sahi jawab")
else:
    print("❌ Galat jawab")
    print("Sahi number tha:", number)
