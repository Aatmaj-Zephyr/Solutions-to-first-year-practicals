'''

a=[[1,2,3],[4,5,6],[7,8,9]]
output
invalid
'''
'''
a=[[1,2,3],[2,3,2],[1,5,7]]
output
[[ 1.375  0.125 -0.625]
 [-1.5    0.5    0.5  ]
 [ 0.875 -0.375 -0.125]]
'''
import numpy as np


def inverse(a):
    a = np.array(a)
    if (abs(np.linalg.det(a)) <= 0.00001):
        return "invalid"
    return np.linalg.inv(a)


print(inverse(a))
