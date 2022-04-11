#string functions in Python.

string="Python programing" #Create a variable and assign it the string "Python programming"
print(string[-3]) #Access the "i" from the variable by index and print it
print(len(string)) #Find the length of the string
print(string[0:5]) # Print the slice "Python" from the variable
print(string[-10:]) #Print the slice “program” from the variable
thing=string[2:4]+string[-3:] #Get the string “thing” from the variable
print(thing)
print(string.upper()) #Convert string into uppercase
string2="is intersting" #Create another variable and assign it the string “ is interesting” now concatenate   both the strings
print(string+" "+string2)

#some string functions
print(string.capitalize())  #Converts the first character of the string to a capital (uppercase) letter
print(string.count('i'))  #Returns the number of occurrences of a substring in the string.
print(string.isalnum())  #Checks whether all the characters in a given string is alphanumeric or not
print(string.isdigit())  #Returns “True” if all characters in the string are digits
