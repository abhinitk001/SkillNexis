
class Product:
    def __init__(self, name, price, quantity):
        self.name = name
        self.price = price
        self.quantity = quantity

    def get_total(self):
        return self.price * self.quantity


class Bill:
    def __init__(self, tax_rate=18):
        self.products = []
        self.tax_rate = tax_rate

    def add_product(self, product):
        self.products.append(product)

    def calculate_subtotal(self):
        return sum(product.get_total()
                   for product in self.products)

    def calculate_tax(self):
        return self.calculate_subtotal() * self.tax_rate / 100

    def calculate_total(self):
        return self.calculate_subtotal() + self.calculate_tax()

    def display_bill(self):
        print("\n" + "=" * 65)
        print("                    CUSTOMER BILL")
        print("=" * 65)

        print(f"{'Product':<20}{'Price':>12}"
              f"{'Quantity':>12}{'Amount':>15}")
        print("-" * 65)

        for product in self.products:
            print(f"{product.name:<20}"
                  f"₹{product.price:>10.2f}"
                  f"{product.quantity:>12}"
                  f"₹{product.get_total():>13.2f}")

        print("-" * 65)
        print(f"{'Subtotal:':>48} ₹{self.calculate_subtotal():>12.2f}")
        print(f"{'Tax (' + str(self.tax_rate) + '%):':>48} ₹{self.calculate_tax():>12.2f}")
        print("=" * 65)
        print(f"{'Grand Total:':>48} ₹{self.calculate_total():>12.2f}")
        print("=" * 65)

p1 = Product("Notebook", 50, 3)
p2 = Product("Pen", 10, 5)
p3 = Product("School Bag", 800, 1)

bill = Bill(tax_rate=18)

bill.add_product(p1)
bill.add_product(p2)
bill.add_product(p3)

bill.display_bill()
