import re

txt = "4213-3443-4590-3485"
'''
True test cases
4523-3443-4590-3485
5674-4444-5632-2456
4354-3456-6788-9067

False test cases
2345-4653-4567-7643
453-234-566-33456
4e56-3352-3456-3215
2345-34-23456-12345


'''
if (len(re.findall(r"\D", txt)) != 3):  #check for letters
    print("incorrect - letters present")
elif (len(re.findall(r"-", txt)) != 3):  #check for hyphens
    print("incorrect positioning of hyphens")


elif (len(txt) != 16 + 3):  #check for word count
    print("incorrect word count")
elif ([len(i) for i in txt.split("-")]!=[4, 4, 4, 4]):  #check for hyphens positions
    print("misplaced hyphens")
elif (len(re.findall(r"^4|^5|^6", txt)) != 1):  #check for 456 beginning
    print("incorrect beginning")
else:
    print("correct")
