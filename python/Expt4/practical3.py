import re
text = "Dave Martin 615-555-7164 173 Main St., Springfield RI 55924 davemartin@bogusemail.com Charles Harris 800-555-5669 969 High St., Atlantis VA 34075 charlesharris@bogusemail.com Eric Williams 560-555-5153 806 1st St., Faketown AK 86847 laurawilliams@bogusemail.com Corey Jefferson 900-555-9340 826 Elm St., Epicburg NE 10671 coreyjefferson@bogusemail.com"
'''
Expected output-



'''
numlist=[]
for txt in text.split():
   # print(txt)
    if(len(re.findall(r"\D", txt))==2): #check for letters
     if(len(re.findall(r"-", txt))==2): #check for hyphens
      if([len(i) for i in txt.split("-")]==[3,3,4]): #position of numbers
       numlist.append(txt)
print(numlist)

#extrace email ids.
print(re.findall(r"\S+@\S+.com",text))
