contact={}

#create a contact book
def contactbook(name, phone):
    contact[name]=phone
    print("contact added")

def search(name):
    if name in contact:
        print('name',name)
        print('phone',contact[name])
    else:
        print('contact not found')

def update(name, new_phone):
    if name in contact:
        contact[name]=new_phone
    else:
        print('contact not found')

def delete(name):
    if name in contact:
        del contact[name]
    else:
        print('contact not found')


contactbook("abhinit",'9328983829')
contactbook("minz",'5452435254')
search("abhinit")
search("aditya")
update('abhinit','432423523432')
print(contact)
delete('minz')
print(contact)
