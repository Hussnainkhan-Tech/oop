# #                       LOOP

# i=0
# j=5
# while(i<10):
#     print(i)
#     i+=1
#     table=j,"*",i,"=",j*i
#     print(table)    
    

# i=1
# while(i<=50):
#     print(i)
#     i=i+1

# l=[1,"hasnain","pakistan",12.12,"we love pakistan"]

# i=0
# while(i<len(l)):
#     print(l[i])
#     i=i+1


#         FOR LOOP
#           FOR WITH LITS

# l=[1,2,3,4,"hasnain khan"]
# for i in l:
#     print(i)


#       FOR WITH TUPLE

# t=("hasnain khan","pakitsan","harry",1,2,3,4,5,5,6)
# for i in t:
#     print(i)


#       loop in STRING

# name="hasnaain"
# for i in name:
#     print(i)

# a="*********"
# for i in a:
#     print(a)


# for i in range(0,100,10):
#     print(i)

#       for loop with ELSE

# l=(1,2,4,"HASNAIN")
# for item in l:
#     print(item)
# else:
#     print("done")    


#       BREAK

# for i in range(100):
#     if(i==33):
#         break    
#     print(i)
    

#       COUNTINOU


# for i in range(100):
#     if(i==33):
#         continue #SKIP THE VALUE WHO I MENTIOM 33 SKIP IN LIST    
#     print(i)
    

#           PASS

# for i in range(10000):
#     pass
# i=12
# while(i>=1):
#     print(i)
#     i=i-1









balance=25000
password=int(input("Enter Password :"))
 
if(password==0000):
    print("1.Check Account balance \n 2.Send money (username ,amount mention and date)\n 3. Received cash( sender name, account holder name and amount how much?)\n 4.After deposit check balance how much increase balance in your Account")
c=int(input("Enter your choice:"))
else:
print("Wrong password ..........")
    

if(c==1):
    print("Your current  account balance is ",balance)
    
elif(c==2):
    print("Enter name of that person you want to send money:")
    user_name=input()
    print("How much amount do you want to send :")
    amount=int(input())
    if(amount < balance  and amount > 0):
        print ( "Rs." , amount ," are transferred successfully to " , user_name, "from Ayesha Saddiqa's account" , "dated 7/29/2025")
    else:
        print("Your account has no sufficient money.........recharge it")    
    
 

elif(c==3):
    sender_name = input("Enter sender's name: ")
    account_holder = input("Enter your account holder name: ")
    amount = int(input("Enter amount received: "))
    balance += amount
    print(f"Rs. {amount} received from {sender_name} to {account_holder}.")
    print(f"Your new account balance is Rs. {balance}")


 
elif(c==4):
    print("How much money you want to deposit :")
    amount=int(input())
    print("After depositing money your balace is rs:",amount+balance)