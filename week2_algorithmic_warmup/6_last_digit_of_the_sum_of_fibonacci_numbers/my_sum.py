def fib(m):
    a = 0
    b = 1

    if m == 0:
        return a

    for i in range(2, m+1):
        c = (a + b) % 10
        a = b
        b = c

    return b


def get_answer(n):
    fib_n = fib(n+2)

    if fib_n == 0:
        return 9

    return fib_n-1


if __name__ == "__main__":
    n = int(input())
    print(get_answer(n) % 10)
