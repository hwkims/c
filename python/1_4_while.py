# 1_4_while.py

# 퀴즈
# while문을 사용해서 0에서 9까지의 정수를 출력하세요
i = 0
while i < 10:
    print(i, end=' ')
    i += 1
print()

print(ord('A'), chr(65))

# 퀴즈
# while문을 사용해서 소문자 전체를 출력하세요
i = 0
while i < 26:
    print(chr(97+i), end='')
    i += 1
print()
print('-' * 30)

# 0 1 2 3 4         0, 5, 1
# 4 3 2 1 0         5-1, -1, -1

for i in range(0, 5, 1):    # 시작, 종료, 증감
    print(i, end=' ')
print()

for i in range(0, 5):       # 시작, 종료, 증감(1)
    print(i, end=' ')
print()

for i in range(5):          # 시작(0), 종료, 증감(1)
    print(i, end=' ')
print()

for i in range(4, -1, -1):
    print(i, end=' ')
print()
print()

# 퀴즈
# 아래와 같이 출력하세요
#     0 1 2 3 4
# --------------
# 0 | 0 1 2 3 4
# 1 | 1 2 3 4 5
# 2 | 2 3 4 5 6
# 3 | 3 4 5 6 7
# 4 | 4 5 6 7 8

for i in range(5):
    print(i, i+1, i+2, i+3, i+4)
print()

for i in range(5):
    for j in range(i, i+5):
        print(j, end=' ')
    print()
print()

for i in range(5):
    for j in range(5):
        print(i+j, end=' ')
    print()
print()
print('-' * 30)

# 퀴즈
# 아래와 같이 출력하세요
#     1 2 3 4 5
#   +------------
# 1 | 1
# 2 | 1 2
# 3 | 1 2 3
# 4 | 1 2 3 4
# 5 | 1 2 3 4 5

for i in range(1, 6):
    for j in range(1, i+1):
        print(j, end=' ')
    print()
print()

s, k = '', 0
for i in range(1, 6):
    s += str(i) + ' '
    k += i
    print(s)

