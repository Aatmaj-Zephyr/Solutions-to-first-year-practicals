odd = lambda x: [print(k) if (k % 2 == 0) else None for k in x]
even = lambda x: [print(k) if (k % 2 != 0) else None for k in x]

a = []
for i in range(0, 5):
    try:
        a.append(int(input("Please enter a number ")))
    except:
        print("invalid input")

print("Odd--")
odd(a)
print("Even---")
even(a)
'''
Please enter a number 1
Please enter a number 2
Please enter a number 3
Please enter a number 4
Please enter a number 5
Odd--
2
4
Even---
1
3
5


'''
