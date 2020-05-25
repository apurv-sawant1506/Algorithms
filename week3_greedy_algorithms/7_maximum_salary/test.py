list1 = [23, 4, 6, 8, 24, 60, 82, 7]

single_list = []

i = 0
while(i < len(list1)):
    if(list1[i] < 10):
        single_list.append(list1[i])
        list1.remove(list1[i])
    else:
        i += 1


print(single_list)
print(list1)
