#programe to calculate the volume and diagonal of prism.
import math

while True:  #accept valid inputs
    try:
        length = int(input("Please enter the length "))  #get length
        breadth = int(input("Please enter breadth "))  #get breadth

        volume = length * breadth * breadth  #calculate volume
        diagonal_length = math.sqrt(
            length**2 + 2 * breadth**2)  #calculate length of diagonal
        #negative numbers will be considered as positive numbers and minus sign will be treated as a mistake.
        #print outputs
        print(volume)
        print(diagonal_length)
        break
    except ValueError:  #error if strings are printed
        print("Please enter a valid number. retry.....")
'''
Test cases
Input-
Length=10
breadth=20

Output-
volume 4000
diagonal length 30

Input-
Length=12
breadth=14

Output-
volume 2352
diagonal length 23.151
'''
