# 2_1_function.py


def f_1():
    print('f_1')


def f_2(a, b):
    print(a + b)


def f_3():
    print('f_3')
    return 7


def f_4():
    return 3, 9


f_1()

f_2(3, 7)
f_2('3', '7')

print(f_3())

a = f_3()
print(a)

f_3()

a, b = f_4()
print(a, b)


# 퀴즈
# 2개의 정수에 대해 순서대로 반환하는 함수를 만드세요
# 3, 7 -> 3, 7
# 7, 3 -> 3, 7
def order(a, b):
    if a > b:
        a, b = b, a

    return a, b


a, b = order(4, 8)
print(a, b)

a, b = order(8, 4)
print(a, b)


def f_5():
    print('f_5')


f_5()
print(f_5())
print('-' * 30)

a, b = 3, 7
(a, b) = (3, 7)

c = a, b
print(c)
print(order(10, 20))

print(c[0], c[1])
print(type(c))

# tuple: 읽기 전용 리스트
# c[0] = 99         # error

e, f = c            # a, b
print(e, f)

