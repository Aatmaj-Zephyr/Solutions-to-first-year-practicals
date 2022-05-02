import re
a=r"Happy Birthday birthday! Have a good day. Ma0 a0b cbd Hope you are doing well. Get well soon."
obj=re.findall("[\S]{1,}",a)
print(obj)

obj=re.search("[\S]{1,}",a)
print(obj)
