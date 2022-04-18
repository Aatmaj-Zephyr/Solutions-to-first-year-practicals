
'''
Write a python program to take list values as input parameters and returns another list without any duplicates.
'''

value=input("Please enter a valid string ") #accept value from user
a={} #make empty tuple
for i in value:
    try:#if value already in dictionary
     a[i]+=1 #add count
    except KeyError: #If value not present already
         a[i]=1 # set value 1
print(a)
