# 4_3_numpy.py
import numpy as np

a = np.arange(10, dtype=np.int32)
print(a)
print(type(a), len(a))
print(a.shape, a.size, a.ndim, a.dtype)

print(a[0], a[-1])
print()

b = np.arange(12).reshape(3, 4)
print(b)
print(b.shape, b.size, b.dtype)

c = b.reshape(2, 6)
print(c)
print(b.reshape(-1, 6))
print(b.reshape(2, -1))

# 퀴즈
# 2차원 배열을 1차원 배열로 변환하세요 (3가지)
print(c.reshape(12))
print(c.reshape(c.size))
print(c.reshape(-1))        # flatten
print()

d = c.reshape(-1)
d[0] = 99
print(d)
print(c)
print('-' * 30)

a = np.arange(6)
print(a)

print(a + 1)            # broadcasting
print(1 + a)
print(a + a)            # vector operation
print(np.sin(a))        # universal function
print(sum(a))

b = a.reshape(2, 3)
print(b)

print(b + 1)
print(b + b)
print(np.sin(b))

c = [1, 3, 5]
# print(c + 1)          # error
print(c + c)            # 넘파이랑 다른 연산
print(sum(c + c))
print('-' * 30)

print(a)
print(a[::-1])          # 슬라이싱 적용 가능

np.arange(10, 30, 3)    # 10 13 16 19 22 25 28






