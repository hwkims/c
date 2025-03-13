# 2_5_library.py
import re
import requests

url = 'http://211.251.214.176:8800/index.php?room_no=2'
response = requests.get(url)
# print(response)
# print(response.text)

# 퀴즈
# 빈 좌석 갯수를 알려주세요
result = re.findall(r'<td align="center" style="border: 1px #000000 solid;">([0-9]+) 석</td>', response.text)
print(len(result))
print(result)
print(result[4])

# 퀴즈
# 사용 중인 좌석 번호를 알려주세요
pattern = r'<font style="color:#FFFFFF;font-size:13pt;font-family:Arial"><b>([0-9]+)</b></font>'
empty = re.findall(pattern, response.text)
print(empty)

