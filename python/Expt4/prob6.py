import re
a=r"9Happy Birthday birthday! Have a good day. dMa0gk a0bc ztgbhgy cbd Hope you are doing well. Get well soon."
num="9" #word to be matched
num="^"+num
obj=re.findall(num,a)
#prints number if number matches else prints empty list.
print(obj)
