import math

number = int(input('Enter number: '))

if number <= 1:
    print("Not a prime number")
else:
    is_prime = True
    for i in range(2, int(math.sqrt(number)) +1):
        if number % i == 0:
            is_prime = False
            break
    
    if is_prime:
        print("Given number is prime")
    else:
        print("Not a prime number")