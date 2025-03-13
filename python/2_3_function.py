# 2_3_function.py


def f_1(a, b, c):
    print(a, b, c)


f_1(1, 2, 3)            # positional argument
f_1(a=1, b=2, c=3)      # keyword argument
f_1(c=3, a=1, b=2)
f_1(1, 2, c=3)
# f_1(a=1, 2, c=3)      # positional은 앞쪽에만 가능


def f_2(a=0, b=0, c=0):
    print(a, b, c)


f_2()
f_2(1)
f_2(1, 2)
f_2(a=1)
f_2(a=1, c=3)
f_2(1, c=3)


def f_3(*args):     # args = 1, 'abc'       가변인자
    print(args, *args)


f_3()
f_3(1)
f_3(1, 'abc')

print([1, 3, 5])
print(*[1, 3, 5])
