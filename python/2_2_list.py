# 2_2_list.py
import random

# collection: list, tuple, set, dict
#              []    ()     {}    {}

a = [1, 3, 5, 'abc', 2.7182]
print(a)
print(a[0], a[1], a[2], a[3])

print('hello')
print(len('hello'))

# 퀴즈
# 리스트를 반복문을 사용해서 모두 출력하세요
for i in range(len(a)):
    print(a[i], end=' ')
print()

for i in a:
    print(i, end=' ')
print()

for i in range(len(a)-1, -1, -1):
    print(a[i], end=' ')
print()

for i in reversed(range(len(a))):
    print(a[i], end=' ')
print()

for i in reversed(a):
    print(i, end=' ')
print()

for i in reversed('abc'):
    print(i, end=' ')
print()

k = reversed('abc')
print(k)
print(list(k))

# 퀴즈
# 리스트를 아래처럼 출력하세요
# 0 1
# 1 3
# 2 5
# 3 abc
# 4 2.7182
idx = 0
for i in a:
    print(idx, i)
    idx += 1
print()

for i in range(len(a)):
    print(i, a[i])
print()

# 3번째는 잠시 뒤에!
for i in enumerate(a):
    print(i, i[0], i[1])
print()

for i, v in enumerate(a):
    print(i, v)
print()


# 퀴즈
# 양수의 자릿수를 알려주는 함수를 만드세요 (2가지)
# 1245 -> 4
def calc_digits(n):
    # if n == 0:
    #     return 1
    #
    # if n < 0:
    #     n = -n

    # 1234 // 10
    # 123 // 10
    # 12 // 10
    # 1 // 10
    # 0
    cnt = 0
    while n:
        # print(n)
        cnt += 1
        n //= 10

    return cnt


def calc_digits_easy(n):
    return len(str(n))


print(calc_digits(1234))
print(calc_digits_easy(1234))
print('-' * 30)

print(random.randrange(0, 100, 1))
print(random.randrange(0, 100))
print(random.randrange(100))


# 퀴즈
# 0~99 사이의 양수 n개를 만들어 반환하는 함수를 만드세요
def make_randoms(size):
    # numbers = [0, 0, 0, 0, 0]
    # numbers = [0] * size
    # for i in range(size):
    #     numbers[i] = random.randrange(100)

    numbers = []
    for i in range(size):
        numbers.append(random.randrange(100))

    return numbers


random.seed(23)
print(make_randoms(5))
print(make_randoms(7))

a1 = make_randoms(3)
a2 = make_randoms(4)
a3 = make_randoms(5)

# 퀴즈
# 2차원 리스트에 포함된 요소의 갯수를 알려주세요
a = [a1, a2, a3]

s = 0
for i in a:
    print(len(i))
    s += len(i)

print(s)
