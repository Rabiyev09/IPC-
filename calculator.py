operator = input("Choose operator (+ - * / ): ")
number1 = float(input("Choose first number: "))
number2 = float(input("Choose second number: "))

if operator == "+":
    print(number1 + number2)
elif operator == "-":
    print(number1 - number2)
elif operator == "*":
    print(number1 * number2)
elif operator == "/":
    print(number1 / number2)
else:
    print(f"Yoo chose incorrect operator ${operator}")