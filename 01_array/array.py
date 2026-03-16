# With the help of Array module
from array import *

val = array("i", [1, 2, 3, 4, 5, 6, 7, 8, 9])
print(val)
print("\n")
for i in range(9):
    print(f"{val[i]}", end=" , ")

for i in val:
    print(i, end=" , ")

print("\n")
print(val.typecode)

val.append(10)
val.insert(0 , 0)

_mylist = [i for i in val]
print(_mylist)

copy_array = array(val.typecode , (x for x in val))
print(copy_array)
sliced_val = val[3:len(val)]
print(sliced_val)

reversed_list = val[::-1]
print(reversed_list)

arr = array('i' , [])
n = int(input("Enter the number: "))

for i in range(n):
    arr.append(int(input("Enter the next input: ")))

for i in arr:
    print(i)