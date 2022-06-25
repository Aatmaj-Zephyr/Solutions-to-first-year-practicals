class student:

    def __init__(self, name, Rollno):
        self.name = name
        self.Rollno = Rollno

    def setPhysicsMarks(self, marks):
        self.physicsmarks = marks

    def setMathsMarks(self, marks):
        self.Mathsmarks = marks

    def setEEMarks(self, marks):
        self.EEmarks = marks

    def setMechMarks(self, marks):
        self.MechMarks = marks

    def getPhysicsMarks(self):
        return self.physicsmarks

    def getMathsMarks(self):
        return self.Mathsmarks

    def getEEMarks(self):
        return self.EEmarks

    def getMechMarks(self):
        return self.MechMarks

    def total(self):
        return sum(
            [self.physicsmarks, self.MechMarks, self.Mathsmarks, self.EEmarks])

    def percentge(self):
        return self.total() / 4 * 100


Aditya = student("Aditya", 121)
Aditya.setMechMarks(18)
Aditya.setEEMarks(10)
Aditya.setMathsMarks(25)
Aditya.setPhysicsMarks(27)
print(int(Aditya.getMechMarks()))
print(int(Aditya.getEEMarks()))
print(int(Aditya.getMathsMarks()))
print(int(Aditya.getPhysicsMarks()))
print(int(Aditya.total()))
print(int(Aditya.percentge()))
