import numpy as np


def evalt(a, b, op):
    if op == '+':
        return a + b
    elif op == '-':
        return a - b
    elif op == '*':
        return a * b
    else:
        assert False


def minandmax(i, j, min_m, max_m, data):
    min_ele = 99999999
    max_ele = -99999999

    for k in range(i, j):
        a = evalt(max_m[i][k], max_m[k+1][j], data[k+k+1])
        b = evalt(max_m[i][k], min_m[k+1][j], data[k+k+1])
        c = evalt(min_m[i][k], max_m[k+1][j], data[k+k+1])
        d = evalt(min_m[i][k], min_m[k+1][j], data[k+k+1])
        min_ele = min(min_ele, a, b, c, d)
        max_ele = max(max_ele, a, b, c, d)

    return min_ele, max_ele


def get_maximum_value(data):
    d = []
    i = 0

    while(i < len(data)):
        d.append(int(data[i]))
        i += 2

    min_m = np.ndarray(shape=(len(d), len(d)), dtype=int)
    max_m = np.ndarray(shape=(len(d), len(d)), dtype=int)

    for i in range(len(d)):
        min_m[i][i] = d[i]
        max_m[i][i] = d[i]

    for s in range(1, len(d)):
        for i in range(len(d)-s):
            j = i+s
            min_m[i][j], max_m[i][j] = minandmax(i, j, min_m, max_m, data)

    return max_m[0][len(d)-1]


if __name__ == "__main__":
    print(get_maximum_value(input()))
