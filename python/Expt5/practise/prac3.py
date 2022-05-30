a=[]
for ptr in range(0,10):
    try:
     a.append(int(input("Please enter a value ")))
    except:
     print("Incorrect value")
print(a)
print(max(a))
print(min(a))
b=[]
c=[]
for i in range(0,len(a)):
    found=False
    for j in range(0,len(b)):
        if(a[i]==b[j][0]):
            b[j][1]+=1
            found=True
    if(found==False):
      b.append([a[i],1])      
print(b)
Max=0
Max2=0
for i in b:
    if(i[1]>Max2):
        Max=i[0]
        Max2=i[1]
print(Max)
