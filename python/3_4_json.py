# 3_4_json.py
import json
import requests
import re

url = 'http://www.kma.go.kr/DFSROOT/POINT/DATA/top.json.txt'
response = requests.get(url)
print(response)
print(response.text)
print(response.content)

content = response.content.decode('utf-8')      # euc-kr
print(content)

# 퀴즈
# code와 value만 보기좋게 출력하세요
cv = json.loads(content)
print(cv)
print(cv[0])
print(type(cv[0]))
print(cv[0]['code'], cv[0]['value'])
print(cv[0].items())

for d in cv:
    # for k in d:
    #     print(d[k], end=' ')
    # print()

    print(d['code'], d['value'])

print('-' * 30)
print(content)

# 퀴즈
# code와 value만 보기좋게 출력하세요 (정규표현식 사용)
# codes = re.findall(r'[0-9]+', content)
# values = re.findall(r'[가-힣]+', content)

codes = re.findall(r'"code":"([0-9]+)"', content)
values = re.findall(r'"value":"([가-힣]+)"', content)
print(codes)
print(values)

# for i in range(len(codes)):
#     print(codes[i], values[i])

for c, v in zip(codes, values):
    print(c, v)


a = [1, 2, 3]
b = ['a', 'b', 'c']
print(list(zip(a, b)))
print(list(zip(a, b, a)))
print('-' * 30)

# 퀴즈
# findall 함수를 한번만 사용해서 결과를 출력하세요
pattern = r'{"code":"([0-9]+)","value":"([가-힣]+)"}'
codes_values = re.findall(pattern, content)
print(codes_values)

for c, v in codes_values:
    print(c, v)
