import re
a=r"Happy Birthday birthday! Have a good day. dMa0gk a0bc ztgbhgy cbd Hope you are doing well. Get well soon."
obj=re.findall("a0[\S]+|[\S]+a0[\S]+|[\S]+a0|[\S]+b[\S]+|[\S]+b|b[\S]+",a)

print(obj)
