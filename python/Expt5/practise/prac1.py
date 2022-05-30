'''
a=[[1,2,3],[2,3,4],[3,4,5]]
b=[[1,2,3],[2,3,4]]
output
Invalid matrix input
'''
'''
c=[[1,2],[3,4]]
d=[[5,6],[7,8]]
output 
[[19 22]
 [43 50]]
'''
import numpy as np


def mat_mul(p, q):
    P = np.array(p)
    Q = np.array(q)
    try:
        print(P @ Q)
    except:
        print("Invalid matrix input")


mat_mul(a, b)
