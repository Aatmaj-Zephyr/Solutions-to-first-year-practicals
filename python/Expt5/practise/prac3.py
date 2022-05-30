a = {}
for ptr in range(0, 10):
    try:
        x = int(input("Please enter a value "))
    except:
        print("Incorrect value")
        continue
    if x not in a:
        a[x] = 1
    else:
        a[x] = a[x] + 1

print(a)
print(max(a))
print(min(a))

b = max(a.values())
for i in a:
    if a[i] == b:
        print("Mode/s=", i)
'''
test cxase
Please enter a value 1
Please enter a value 2
Please enter a value 3
Please enter a value 4
Please enter a value 5
Please enter a value 1
Please enter a value 2
Please enter a value 1
Please enter a value 1
Please enter a value 78
{1: 4, 2: 2, 3: 1, 4: 1, 5: 1, 78: 1}
78
1
Mode/s= 1

'''
