import re

a = r"Happy Birthday! Have a good day. Hope you are doing well. Get well soon."
obj = re.findall("[a-z&A-Z]{4,}", a)
print(obj)
