#name = "hasnain"
#nameshort=name[-8:-1]
#print(nameshort)

#a="amazingk"
#print (a[1:9:3])

"""#endswith

name="hasnain khan"
print(len(name))
print(name.endswith("nkhan"))
print(name.startswith("hasnain"))
print(name.capitalize())
print(name.lower())
print(name.upper())
print(name.title())
print(name.lstrip())
print(name.strip())
print(name.split(','))
print(name.isalpha())
print(name.islower())
print(name.isupper())
print(name.isalnum())
"""







"""| Function         | Description                               |
| ---------------- | ----------------------------------------- |
| `len(s)`         | Returns the length of the string          |
| `s.lower()`      | Converts the string to lowercase          |
| `s.upper()`      | Converts the string to uppercase          |
| `s.capitalize()` | Capitalizes the first letter              |
| `s.title()`      | Capitalizes the first letter of each word |
| `s.strip()`      | Removes whitespace from both ends         |
| `s.lstrip()`     | Removes whitespace from the left          |
| `s.rstrip()`     | Removes whitespace from the right         |
|s.find(sub)       |Returns index of first occurrence of sub   | (or -1 if not found)
|s.index(sub)	   |Like find(), but raises error if not found |


| Function      | Description                                       |
| ------------- | ------------------------------------------------- |
| `s.isalpha()` | Returns `True` if all characters are letters      |
| `s.isdigit()` | Returns `True` if all characters are digits       |
| `s.isalnum()` | Returns `True` if all characters are alphanumeric |
| `s.islower()` | Checks if all letters are lowercase               |
| `s.isupper()` | Checks if all letters are uppercase               |
"""


#name=input("enter the name")
#print(f"good morning,{name}"

#letter='''DEAR <|NAME|>
#YOU ARE SELECTED
#<|DATE|>
#'''
#print (letter.replace("<|NAME|>","HASNAIN KHAN").replace("<|DATE|>","07 OCTUBER 2005"))

name="has  nain khan"
print(name.find("nain"))