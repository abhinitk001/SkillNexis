class bankaccount:
    def __init__(self, account_holder, balance=0):
        self.account_holder = account_holder
        self.balance = balance
    def deposit(self, amount):
        if amount<0:
            print("depposit amount must be positive")
        else:
            self.balance +=amount
            print("Amount Deposited Successfully")

    def withdraw(self, amount):
        if amount < 0:
            print("Amount shoould be positive")
        elif amount> self.balance:
            print("Insufficient Balance")
        else:
            self.balance -= amount

    def display(self):
        print(f"Account Holder{self.account_holder}")
        print(f"Current Balance: {self.balance}")

account = bankaccount("Abhinit Kumar", 5000)

account.display()
account.deposit(1500)
account.withdraw(2000)
account.display()
