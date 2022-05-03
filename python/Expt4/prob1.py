import re
a="Happy Birthday birthday! Have a good day. Ma0 a0b cbd Hope day you are doing well. Get well soon."

obj=re.findall("[\w]{1,}",a)
ctr=0 # position counter
print(obj)
for i in obj:
    print(i,end="-")
    obj2=re.search(i,a[ctr:]) #remove duplicate by reducing length of string
    ctr=ctr+obj2.start()
    print(ctr)

