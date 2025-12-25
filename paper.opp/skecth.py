a=1
print("1. SEND MONEY")
print("2. RECIVED MONEY")
print("3. DEPOSIT MONEY")
print("4. CHECK MONEY")
print(" PRESS THE NUMBER ")
print(input())
if(a==1):
    a=30000
    print("YOU WANT THE SEND MONEY ")
    print("ENTER THE ACCOUNT NUMBER")
    print(input())
    print("ENTER THE ACOUNT HOLDER NAME")
    print(input())
    print("ENTER THE AMOUNT")
    print(input())
    if(a<=30000):
        print("PAYMENT SUCESSFULL !")
    else:
        print("INSUFICIENT BALANCE.\n PLEASE RECHARGED YOUR ACOUNT.")
else:
    print("WRONG NUMBER")
    
    
