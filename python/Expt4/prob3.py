import re
a=r"Happy Birthday birthday! Have a good day. dMa0 a0b cbd Hope you are doing well. Get well soon."
obj=re.findall("a0[\S|\s]+|[\S|\s]a0[\S]+|[\S|\s]a0|[\S|\s]b[\S]+|[\S|\s]b|b[\S|\s]+",a)

print(obj)
