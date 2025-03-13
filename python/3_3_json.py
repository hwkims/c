# 3_3_json.py
import json

# xml, json, yaml
a = {"ip": "8.8.8.8"}
b = json.dumps(a)
print(b)
print(type(b))

c = json.loads(b)
print(c)
print(type(c))

# 퀴즈
# 아래 데이터에서 값만 출력하세요
d = '''{
   "time": "03:53:25 AM",
   "milliseconds_since_epoch": 1362196405309,
   "date": "03-02-2013"
}'''
e = json.loads(d)
print(e.keys())

for k in e:
    print(k, e[k])

