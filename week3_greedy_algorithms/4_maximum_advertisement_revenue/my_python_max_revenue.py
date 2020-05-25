def max_revenue(a_list, b_list, n):
    a_list.sort(reverse=True)
    b_list.sort(reverse=True)

    result = 0

    for i in range(n):
        result += (a_list[i]*b_list[i])

    return result


if __name__ == '__main__':
    n = int(input())
    a_list = list(map(int, input().split()))
    b_list = list(map(int, input().split()))

    print(max_revenue(a_list, b_list, n))
