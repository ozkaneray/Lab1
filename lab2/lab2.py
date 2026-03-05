#TASK 1
n = int(input("Please enter a positive integer greater than 1 :  \n"))

steps = 0
result = str(n)

while n != 1:
    if n % 2 == 0:
        n = n // 2
    else:
        n = n * 3 + 1
    result = result + " -> " + str(n)
    steps += 1

print(result)
print("Total steps :  " + str(steps))

#TASK 2
a=0
while a<10 or a>100:
    a=int(input("please er a number between 10 and 100:"))
    if a<10 or a>100:
        print("invalid value")

fizz_c=0
buzz_c=0
fizzbuzz_c=0

for i in range(1,a+1):

        if i % 7 == 0:
            print("skipped")
            continue
        if i%3==0 and i%5==0:
            print("FizzBuzz")
            fizzbuzz_c=fizzbuzz_c+1

        elif i%3==0:
            print("Fizz")
            fizz_c=fizz_c+1

        elif i%5==0:
            print("Buzz")
            buzz_c=buzz_c+1

        else:
            print(i)


print("--- Summary ---")
print("Fizz count : "+str(fizz_c))
print("Buzz count : "+str(buzz_c))
print("FizzBuzz count : "+str(fizzbuzz_c))

#TASK 3
b=0
while b<3 or b>9:
    b=int(input("Please enter a number between 3 and 9: "))
    if b<3 or b>9:
        print("invalid value ")

for i in range(1,2*b):
    k=b-abs(b-i)
    print("*"*k)



