# every even number greater than 2 can be expressed as the sum of two prime numbers
# 4 = 2 + 2
# 6 = 3 + 3
# 8 = 3 + 5
from math import sqrt
# generate all prime numbers up to the given number

def is_prime_number(n):
    # a prime number is a natural number greater than 1 that has no positive divisors ohter than 1 and itself.
    # Corner case
    if (n <= 1):
        return False
    elif n > 1: 
        # check for factors
        for i in range(2, n):
            # if factor is found
            if (n % i) == 0:
                return False
    return True

def goldbach_conjecture(even_num):
    if even_num < 4 or even_num % 2 != 0:
        return "Input mus be an even number greater than 2"
    for num in range(2, even_num):
        if is_prime_number(num) and is_prime_number(even_num - num):
            return (num, even_num - num)

def main():
    #print(is_prime_number(11))
    #print(is_prime_number(10))
    print(is_prime_number(4))
    print(goldbach_conjecture(6))


main()
