def palindrome(x):
    return x[::-1] == x


print(palindrome(input("Please enter a string ")))
'''
abcba- True
bbb-True
abaa - False
'''
