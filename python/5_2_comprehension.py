# 5_2_comprehension.py
import random

# 컴프리헨션: 리스트를 만드는 한줄짜리 반복문

# 퀴즈
# 0에서 9까지의 정수가 포함된 리스트를 만드세요
a = []
for i in range(10):
    a.append(i)

print(a)

b = [i for i in range(10)]
print(b)

# 퀴즈
# 100보다 작은 난수 10개가 들어있는 리스트를
# 컴프리헨션으로 만드세요
random.seed(23)
c = []
for _ in range(10):             # _ : placeholder
    n = random.randrange(100)
    c.append(n)

print(c)

random.seed(23)
d = [random.randrange(100) for _ in range(10)]
print(d)


seed = 7
for i in range(10):
    n = ((seed * 1103515245) + 12345) % 32767
    seed = n
    print(n)


# 퀴즈
# 1차원 리스트에서 홀수만 뽑아서 리스트를 만드세요
print(d)

e = []
for i in range(len(d)):
    if d[i] % 2:
        e.append(d[i])

print(e)
print([d[i] for i in range(len(d)) if d[i] % 2])
print()

f = []
for i in d:
    if i % 2:
        f.append(i)

print(f)
print([i for i in d if i % 2])

g1 = [random.randrange(100) for _ in range(10)]
g2 = [random.randrange(100) for _ in range(10)]
g3 = [random.randrange(100) for _ in range(10)]

# 퀴즈
# 2차원 리스트를 1차원 리스트로 변환하세요
g = [g1, g2, g3]
print(g)

h = []
s = 0
for i in g:
    for j in i:
        # print(j, end=' ')
        h.append(j)
        s += j

print(h)
print([j for i in g for j in i])

# 퀴즈
# 2차원 리스트를 홀수만 들어있는 1차원 리스트로 변환하세요
print([j for i in g for j in i if j % 2])

# 퀴즈
# 2차원 리스트의 합계를 구하세요
print(sum([j for i in g for j in i]))

print([j+1 for i in g for j in i if j % 2])

# 퀴즈
# 2차원 리스트에서 홀수만 뽑아서 2차원 리스트를 만드세요
# [[1, 79, 3],
#  [13, 63, 53, 65, 93, 55],
#  [45, 7, 75, 47, 79]]
outer = []
for i in g:
    inner = []
    for j in i:
        if j % 2:
            # print(j, end=' ')
            inner.append(j)
    # print()
    # print(inner)
    outer.append(inner)

print(outer)
# inner = [j for j in i if j % 2]
outer = [[j for j in i if j % 2] for i in g]

# 퀴즈
# 2차원 리스트에서 각각의 리스트 길이를 알려주세요
for i in outer:
    print(len(i))

print([len(i) for i in outer])
print(max([len(i) for i in outer]))

# 퀴즈
# 2차원 리스트에 포함된 리스트의 길이 합계를 구하세요
print(sum([len(i) for i in outer]))
print(len([j for i in g for j in i if j % 2]))
print()

# 퀴즈 (구글 입사문제)
# 0에서 10000까지의 정수에 포함된 8의 갯수 합계를 구하세요
# 808 -> 2
def count_8(n):
    cnt = 0
    while n:
        cnt += ((n % 10) == 8)
        # if (n % 10) == 8:
        #     cnt += 1

        # 808 -> 80 -> 8 -> 0
        n //= 10

    return cnt


print(count_8(707))
print(count_8(808))
print(count_8(888))

print([count_8(i) for i in range(10)])
print(sum([count_8(i) for i in range(10000)]))

print([str(i) for i in range(10)])
print([str(i).count('8') for i in range(10)])
print(sum([str(i).count('8') for i in range(10000)]))

print([i for i in range(10)])
print(str([i for i in range(100)]))
print(str([i for i in range(10000)]).count('8'))

s = '[0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99]'
print(s.count('8'))

print([3, 9, 8, 5].index(8))

cnt = 0
for i in range(10000):
    # print(str(i))
    for ch in str(i):
        cnt += (ch == '8')
        # if ch == '8':
        #     cnt += (ch == '8')
        # else:
        #     cnt += (ch == '8')

    #     print(ch, end=' ')
    # print()

print(cnt)
print([ch == '8' for i in range(10) for ch in str(i)])
print(sum([ch == '8' for i in range(10000) for ch in str(i)]))

s = 'hello'
print(list(s))

