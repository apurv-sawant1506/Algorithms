import sys


def get_pisano_period(m):
    a = 0
    b = 1
    c = (a+b)

    for i in range(m*m):
        c = (a + b) % m
        a = b
        b = c

        if ((a == 0) and (b == 1)):
            return i + 1

    return 0


def get_fibonacci_huge(n, m):
    remainder = n % get_pisano_period(m)
    first = 0
    second = 1

    res = remainder

    for i in range(1, remainder):
        res = (first + second) % m
        first = second
        second = res

    return res % m


if __name__ == '__main__':
    x = list(map(int, input().split()))
    print(get_fibonacci_huge(x[0], x[1]))
