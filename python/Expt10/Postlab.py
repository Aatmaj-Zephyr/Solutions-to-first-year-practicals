try:
    file = open(input("Please enter a valid file name "), "r")
    for i in file:
        print(i.upper())
except FileNotFoundError:
    print("please enter  valid file name ")
