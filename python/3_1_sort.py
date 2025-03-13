# 3_1_sort.py

a = [4, 7, 2, 5, 1]

# a.sort()
b = sorted(a)

print(a)
print(b)

print(sorted(a, reverse=True))

c = ['Red', 'green', 'BLUE', 'YELLOW', 'white']
print(sorted(c))

s = 'BLUE'
print(s.lower())
print(s)


def to_lower(color):
    return color.lower()


# 퀴즈
# 문자열 리스트를 길이에 맞게 정렬하세요
def length(color):
    print(color)
    return len(color)


print(sorted(c, key=to_lower))
print(sorted(c, key=lambda e: e.lower()))
print(sorted(c, key=str.lower))

# c -> [3, 5, 4, 6, 5]
print(sorted(c, key=length))
print(sorted(c, key=lambda e: len(e)))
print(sorted(c, key=len))
print(sorted(c, key=len, reverse=True))

# 퀴즈
# 1차원 리스트를 정렬하세요 (2가지)
k = [5, 1, 3, 2]
# k.sort()
list.sort(k)
print(k)




