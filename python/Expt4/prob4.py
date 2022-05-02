import re
a=r"Happy Birthday birthday! Have a good day_. a0 a0b Hope_ you are doing well. Get well soon."
obj=re.findall("[a-z]+_",a)
print(obj)
