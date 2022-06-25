class store():
    products={'book':70,'pen':10,'gelpen':15,'pencil':5}
    #dictionary to store the product and prices
    cart= dict.fromkeys(products, 0) # make dictioanry with zero values

    def display(self):
        for key in self.products:
            print(key,end="\t\t")
            print(self.products[key])
    def prompt(self):
        for key in self.cart:
            print(key,end="-")
            self.cart[key]=input("Enter amount for the product ")

    def bill(self):
        net=0
        for key in self.products:
          print(key,end="\t\t")
          print(self.cart[key],end="\t")
          print(self.products[key],end="\t\t")
          print(int(self.cart[key])*int(self.products[key])) #error handling not done for integer casting
          net+=int(self.cart[key])*int(self.products[key])
        print(net)



mystore=store()
mystore.display()
mystore.prompt()
mystore.bill()
