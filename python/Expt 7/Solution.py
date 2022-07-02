class account():
    #This is the superclass Account.
    def __init__(self):
        self.balance = 0
        pass
    def deposit(self,ammount):
        self.balance +=ammount
    def withdraw(self,ammount):
        if(self.balance > ammount):
            self.balance -=ammount
        else:
            print("Withdrawal not permitted")
    def display(self):
        print(self.balance)
class saving_account(account):
    #Initializing the class saving_account with the parameter rate_of_interest.
    def __init__(self,rate_of_interest):
        super().__init__()
        self.rate_of_interest = rate_of_interest
    #Calculating the interest on the balance.
    def deposit_interest(self):
        self.balance +=self.rate_of_interest*self.balance


class current_account(account):
    #Initializing the class current_account with the parameters minimum_balance and service_charge.
    def __init__(self,minimum_balance,service_charge):
        super().__init__()
        self.minimum_balance = minimum_balance
        self.service_charge = service_charge/100
    #The below code is defining a function withdraw which is a subclass of the superclass Account.
    def withdraw(self,amount):
        super().withdraw(amount)
        if(self.balance<=self.minimum_balance):
            self.penalty()
    #Calculating the penalty for the current account.
    def penalty(self):
        self.balance-=self.service_charge*self.balance

my_saving_account=saving_account(rate_of_interest=10) #10% interest rate
my_saving_account.deposit(200)
my_saving_account.display()
my_saving_account.withdraw(20)
my_saving_account.display()
my_saving_account.deposit_interest()
my_saving_account.display()


my_current_account=current_account(minimum_balance=500,service_charge=2)
my_current_account.deposit(2000)
my_current_account.display()
my_current_account.withdraw(200)
my_current_account.display()
my_current_account.withdraw(1400)
my_current_account.display()
my_current_account.withdraw(1400)
my_current_account.display()
    
