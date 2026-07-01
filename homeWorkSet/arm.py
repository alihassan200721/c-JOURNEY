num = int(input("Enter a number: "))

# store original number
original = num

# find number of digits
digits = len(str(num))

# calculate Armstrong sum
total = 0
temp = num

while temp > 0:
    digit = temp % 10
    total += digit**digits
    temp //= 10

# check result
if total == original:
    print("Armstrong number")
else:
    print("Not an Armstrong number")
