class Age_error(Exception):
    pass
class Weight_error(Exception):
    pass
def validate(age,weight):
    if(age>12):
        raise(Age_error)
    if(weight>40):
        raise(Weight_error)
        
weight=int(input("Please enter weight "))
age=int(input("Please enter age "))
try:
    validate(age,weight)
except Age_error:
    print("Overage: Student is not eligible for registration")
except Weight_error:
    print("OverWeight: Student is not eligible for registration")
