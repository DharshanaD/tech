my_list=[10,20,39,47,20,70]
print(type(my_list))
print("maximum value of list=",max(my_list))
print("minimum value of list=",min(my_list))
print("sum of the list=",sum(my_list))
print("remove the value of  list=",my_list.pop(2))
print("Reverse the list=",my_list.reverse())
print(my_list)
print("The index position of list=",my_list.index(10))
print("The count value in list=",my_list.count(20))
print("The append in list=",my_list.append(50))
print(my_list)
print("copy the list=",my_list.copy())
print("sorting the list=",my_list.sort())
print(my_list)
print("the insert of element=",my_list.insert(3,60))
print(my_list)
print("The length of list=",len(my_list))
print("clear the list=",my_list.clear())
print(my_list)

output
<class 'list'>
maximum value of list= 70
minimum value of list= 10
sum of the list= 206
remove the value of  list= 39
Reverse the list= None
[70, 20, 47, 20, 10]
The index position of list= 4
The count value in list= 2
The append in list= None
[70, 20, 47, 20, 10, 50]
copy the list= [70, 20, 47, 20, 10, 50]
sorting the list= None
[10, 20, 20, 47, 50, 70]
the insert of element= None
[10, 20, 20, 60, 47, 50, 70]
The length of list= 7
clear the list= None
[]
