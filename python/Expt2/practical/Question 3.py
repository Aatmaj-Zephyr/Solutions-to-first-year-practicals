
'''
Write a program that takes a string as input from user and computes the frequency of each letters. Use a variable of dictionary type to maintain the count.
'''

value=input("Please enter a valid string ") #accept value from user
a={} #make empty tuple
for i in value:
    try:#if value already in dictionary
     a[i]+=1 #add count
    except KeyError: #If value not present already
         a[i]=1 # set value 1
print(a)
