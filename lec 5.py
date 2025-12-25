
                             # DICTIONANRY
# a={
# "hasnain":1,"apple":2,
# "khan":21,"pakistan":14,
# "hasnain":22
# }
# # print(a.items())
# # print(a.keys())
# # a.update({"hasnain":255,"masroor":22})
# # print(a)
# print(a.get("pakistan"))


# ✅ 1. dict.keys()
# Returns all keys.

# python
# Copy
# Edit
# d = {"a": 1, "b": 2}
# print(d.keys())      # dict_keys(['a', 'b'])
# ✅ 2. dict.values()
# Returns all values.

# python
# Copy
# Edit
# print(d.values())    # dict_values([1, 2])
# ✅ 3. dict.items()
# Returns all key-value pairs.

# python
# Copy
# Edit
# print(d.items())     # dict_items([('a', 1), ('b', 2)])
# ✅ 4. dict.get(key)
# Returns the value of a key. Returns None if key not found (no error).

# python
# Copy
# Edit
# print(d.get("a"))    # 1
# print(d.get("z"))    # None
# ✅ 5. dict.update()
# Updates or adds new key-value pairs.

# python
# Copy
# Edit
# d.update({"c": 3})
# print(d)             # {'a': 1, 'b': 2, 'c': 3}
# ✅ 6. dict.pop(key)
# Removes the specified key and returns its value.

# python
# Copy
# Edit
# x = d.pop("a")
# print(x)             # 1
# print(d)             # {'b': 2, 'c': 3}
# ✅ 7. dict.popitem()
# Removes the last inserted item.

# python
# Copy
# Edit
# d.popitem()
# print(d)             # {'b': 2}
# ✅ 8. dict.clear()
# Removes all items.

# python
# Copy
# Edit
# d.clear()
# print(d)             # {}
# ✅ 9. dict.copy()
# Returns a shallow copy of the dictionary.

# python
# Copy
# Edit
# d2 = {"x": 9, "y": 10}
# d3 = d2.copy()
# print(d3)            # {'x': 9, 'y': 10}
# ✅ 10. dict.fromkeys()
# Creates a new dictionary from a set of keys with the same value.

# python
# Copy
# Edit
# keys = ['a', 'b', 'c']
# new_dict = dict.fromkeys(keys, 0)
# print(new_dict)      # {'a': 0, 'b': 0, 'c': 0}



                        #SETS


# s={1,2,3,25,75,5,10,6,7,7,78}

# print(s,sorted(s))
# print(s,type(s))
# print(s.add(244))
# print(s,sorted(s))

# s = {1, 2, 3,4,5}
# s.discard(4)  # No error, s remains the same
# print(s)

            # METHODS OF SET 
# S.ADD()
# S.UPADATE()
# S.DISCARD()
# S.REMOVE()
# S.POP()
# S.UNION()
# S.INTERSECTION()
# S.SYMMETRIC_DIFFERENCE()
# S.CLEAR()
# S.ISSUBSET()
# S.ISSUPERSET()
# S.ISDISJOINT()


# words = {
# "kela":"banana",
# "kursi":"chair",
# "bahi":"brother"
# }
# word=input("enter the name who you want::")
# print(words[word])


# s=set()
# a=int(input("enter the number"))
# s.add(a)
# a=int(input("enter the number"))
# s.add(a)
# a=int(input("enter the number"))
# s.add(a)
# a=int(input("enter the number"))
# s.add(a)
# a=int(input("enter the number"))
# s.add(a)
# a=int(input("enter the number"))
# s.add(a)
# a=int(input("enter the number"))
# s.add(a)
# a=int(input("enter the number"))
# s.add(a)
# print(s)

# a=set()
# b=a.add(18)
# b=a.add("18")
# print(a)

# s=set()
# a=s.add(20)
# b=s.add(20.0)
# c=s.add('20')
# print(s,len(s))

# a={}
# b=input("enter the name::")
# c=input("enter the language::")
# a.update({b:c})
# b=input("enter the name::")
# c=input("enter the language::")
# a.update({b:c})
# b=input("enter the name::")
# c=input("enter the language::")
# a.update({b:c})
# b=input("enter the name::")
# c=input("enter the language::")
# a.update({b:c})
# print(a)

