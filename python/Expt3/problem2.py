a=''
while (True): # until a is valid
    a=input("Please enter a number:") #take number input
    try:
        a=int(a) #a is int
        break
    except:
        pass
Sum=0 #initiate to 0

for i in str(a):
  Sum=Sum+int(i)**3 #cube and sum
if(Sum==a):
    print("Yes. It is aarmstrong number.")
else:
    print("No. Not a armstrong number.")
    
'''
Test cases


Please enter a number:112
No. not armstrong number.


Please enter a number:153
Yes. It is aarmstrong number.

'''
