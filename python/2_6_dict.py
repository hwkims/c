# 2_6_dict.py
import random
import collections

# set {}
# dict {}

# 퀴즈
# 리스트에서 중복 데이터를 모두 삭제하세요
a = [1, 3, 5, 1, 3, 5, 2, 4, 2, 4]
b = set(a)
a = list(b)
print(b)
print(a)

c = set()
d = {}
print(type(c), type(d))

#     key    value
d = {'name': 'kim', 'age': 20}
print(d)
print(d['name'], d['age'])

d['hobby'] = 'hiking'       # 추가
print(d)

d['hobby'] = 'climbing'     # 수정
print(d)

print(d.keys())
print(d.values())
print(d.items())

# 퀴즈
# keys 함수를 사용해서 딕셔너리 전체를 출력하는 반복문을 만드세요
for k in d.keys():
    print(k, d[k])
print()

for k in d:
    print(k, d[k])
print()

# 퀴즈
# items 함수를 사용해서 딕셔너리 전체를 출력하는 반복문을 만드세요
for kv in d.items():
    print(kv, kv[0], kv[1])
print()

# for kv in d.items():
#     print(*kv)
# print()

for k, v in d.items():
    print(k, v)


def make_randoms(size, limit):
    numbers = []
    for i in range(size):
        numbers.append(random.randrange(limit))

    return numbers



# 퀴즈
# 가장 많이 출현한 숫자를 알려주세요
# 1번 : list 사용한 빈도 계산
# 2번 : dict 사용한 빈도 계산
numbers = make_randoms(100, limit=10)
print(numbers)

freq1 = [0] * 10
for n in numbers:
    freq1[n] += 1

print(freq1)

freq2 = {}
for n in numbers:
    # freq2.setdefault(n, 0)
    if n not in freq2:
        freq2[n] = 0

    freq2[n] += 1

print(freq2)

freq_list = list(freq2.items())
print(freq_list)

# 퀴즈
# freq_list를 빈도순으로 정렬하세요
print(sorted(freq_list, key=lambda e: e[1]))
print(sorted(freq_list, key=lambda e: e[1], reverse=True))
print(sorted(freq_list, key=lambda e: -e[1]))

c = collections.Counter(numbers)
print(c)
print(c.most_common(3))
