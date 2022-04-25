a=input("Please enter a string ")
num=0 # variable to hold numbers count
let=0 # variabl to hold letters count
for i in a:
    if(i==" "):
        continue
    try :
        temp=int(i) # if it is number
        num+=1
    except ValueError: # if it is character
        let+=1
print("Number of letters=",let)
print("Number of Numbers=",num)

'''
Test case 

Please enter a string 123bag
Number of letters= 3
Number of Numbers= 3
'''
