def IsPrime(a): #function to check if a number is primt or not.
    for i in range(2,a):
        if(a%i==0):
          return False
    return True 
Input_List=[]#empty list
while(True):
    a=input("Please enter a valid number ") #take input
    try:
        a=int(a) #a is int

        if(a<-1 or a==0): # number must not be negative
            print("Invalid entry!")
            continue
        if(a==-1):
            break;
        Input_List.append(a) # add to list
        
    except ValueError:
        print("Invalid entry!")
prime=0;
composite=0;
for i in Input_List: 
    if(i==1):
        continue # 1 is neither prime nor composite
    if (IsPrime(i)==True):
         prime+=1 #increase prime
    else:
        composite+=1 #increase composite
print("Number of primes=",prime)
print("Number of composite=",composite)
'''
Test case covering all values


Please enter a valid number 1
Please enter a valid number 2
Please enter a valid number 3
Please enter a valid number 4
Please enter a valid number 5
Please enter a valid number a
Invalid entry!
Please enter a valid number 0
Invalid entry!
Please enter a valid number -1
Number of primes= 3
Number of composite= 1
'''
