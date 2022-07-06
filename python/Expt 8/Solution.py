from abc import ABC, abstractmethod
class vehical(ABC):
 def __init__(self,name,_speed):
 self.name=name
 self._speed=_speed

 @abstractmethod
 def speed(self):
 pass
class twowheeler(vehical):
 def speed(self):
 print(self.name)
 print(self._speed)

class fourwheeler(vehical):
 def speed(self):
 print(self.name)
 print(self._speed)

a=twowheeler("honda",100)
a.speed()
b=fourwheeler("nano",50)
b.speed()
