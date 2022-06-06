def factorial(x):
    if(x<0):
        return 0 #error
    if(x-1!=0):
     return x*factorial(x-1)
    else:
        return 1

print(factorial(4))
