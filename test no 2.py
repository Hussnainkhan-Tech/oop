# QUESTION NO 1.......................

# car=[["Honda","10"],["Civic","19"]]
# print(car[0])
# dict=car
# print(dict)

# QUESTION NO 2.....................

# a={}
# a["Hasnain"]="urdu"
# a["Ayesha"]="English"
# a["Usman"]="Punjabi"
# a["Wasif"]="Gunga"
# print(a)

# QUESTION NO 3......................

# names=["hasnain","fazal","zeeshan","abdullah"]
# a=input("enter the name::")
# if(a in names):
#     print("Yes i'm Present")
# else:
#     print("no mam, Absent")    

# QUESTION NO 4.......................

# a=input("what you want?\n")
# if("sunshine"in a.lower()):
#     print("yes, you taliking about sunshine")
# else:
#     print("Bhai jan Galt baaat nh krne ")    

# QUESTTION NO 5.........................

# a=int(input("enter the number::"))
# b=int(input("enter the number::"))
# c=int(input("enter the number::"))
# d=int(input("enter the number::"))
# e=int(input("enter the number::"))

# if(a>=b and a>=c and a>=d and a>=e):
#     print("'A'is the greatest number")
# elif(b>=a and b>=c and b>=d and b>=e):
#     print("'B' is the greatest number")
# elif(c>=a and c>=b and c>=d and c>=e):
#     print("'C'is the greatest number")
# elif(d>=a and d>=b and d>=c and d>=e):
#     print("'D' is the greatest number")
# else:
#     print("'E'is the greatest number")


# if(a<=b and a<=c and a<=d and a<=e):
#     print("'A'is the smallest number")
# elif(b<=a and b<=c and b<=d and b<=e):
#     print("'B' is the smallest number")
# elif(c<=a and c<=b and c<=d and c<=e):
#     print("'C'is the smallest number")
# elif(d<=a and d<=b and d<=c and d<=e):
#     print("'D' is the smallest number")
# else:
#     print("'E'is the smallest number")


# QUESTION NO 6.............

# radius = float(input("Enter radius: "))
# choice = int(input("Enter the number "))

# if choice == 1:
#     area = 3.14*radius*radius
#     print("Area of circle is:", area)
# elif choice == 2:
#     circumference = 2 *3.14*radius
#     print("Circumference is:", circumference)
# else:
#     print("TUM TO PAKKY ANDHY HO BHAI")

# name="hasnainkhan"
# a=len(name)
# print (a)
# b=name[:6]
# print (b)

# Taking array input
n = int(input("Enter number of elements: "))
arr = []

print("Enter values:")
for _ in range(n):
    arr.append(int(input()))

# Taking position & new value
pos = int(input("Enter position to insert (1-based): "))
value = int(input("Enter value to insert: "))

# Insert using Python list
arr.insert(pos - 1, value)

print("\nArray after insertion:")
print(arr)
