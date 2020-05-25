def max_salary(n, arr):
    single_arr = []
    # double_arr = []
    i = 0

    while(i < len(arr)):
        if(arr[i] < 10):
            single_arr.append(arr[i])
            arr.remove(arr[i])
        else:
            i += 1

    salary = ''

    single_arr.sort(reverse=True)
    arr.sort(reverse=True)

    single_arr_ptr = 0
    arr_ptr = 0

    while((single_arr_ptr < (len(single_arr))) and (arr_ptr < len(arr))):
        if(single_arr[single_arr_ptr] >= int(arr[arr_ptr] / 10)):
            salary += str(single_arr[single_arr_ptr])
            single_arr_ptr += 1
        else:
            salary += str(arr[arr_ptr])
            arr_ptr += 1

    if(single_arr_ptr >= len(single_arr)):
        while(arr_ptr < len(arr)):
            salary += str(arr[arr_ptr])
            arr_ptr += 1

    if(arr_ptr >= len(arr)):
        while(single_arr_ptr < len(single_arr)):
            salary += str(single_arr[single_arr_ptr])
            single_arr_ptr += 1

    return salary


if __name__ == '__main__':
    n = int(input())
    arr = list(map(int, input().split()))

    print(max_salary(n, arr))
