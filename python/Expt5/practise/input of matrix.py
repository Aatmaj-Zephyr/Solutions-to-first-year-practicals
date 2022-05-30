#take matrix input
def mat_input():
    m=int(input("Please enter m "))
    n=int(input("Please enter n "))
    a=[]
    for i in range(m):
        a.append([])
        for j in range(n):
            a[i].append(input("."))
    print(a)
    return a
