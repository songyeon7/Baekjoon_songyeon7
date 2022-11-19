n = int(input())
count = 1
result = 1
while(n > count):
    count += 6*result
    result += 1
print(result)