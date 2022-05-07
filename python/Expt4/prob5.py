import re

a = r"Happy Birthday birthday! Have a good day. dMa0gk a0bc ztgbhgy cbd Hope you are doing well. Get well soon."
word = "Happy"  #word to be matched
word = "^" + word
obj = re.findall(word, a)
#prints word if wordber matches else prints empty list.
print(obj)
