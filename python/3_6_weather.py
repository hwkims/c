# 3_6_weather.py
import requests
import re

f = open('data/weather.csv', 'w', encoding='utf-8')

# 퀴즈
# 아래 주소에서 모든 province 데이터를 출력하세요
url = 'http://www.kma.go.kr/weather/forecast/mid-term-rss3.jsp?stnId=108'
response = requests.get(url)
# print(response)
# print(response.text)

# print(re.findall(r'<province>(.+)</province>', response.text))

# 퀴즈
# location 태그를 모두 읽어오세요

# DOTALL: 개행문자 무시 (검색 대상이 여러 줄에 걸쳐있을 때)
# .+ : 가장 긴 패턴 검색(greedy)
# .+?: 가장 짧은 패턴 검색(non-greedy)
pattern = r'<location wl_ver="3">(.+?)</location>'
locations = re.findall(pattern, response.text, re.DOTALL)
print(len(locations))

# 퀴즈
# locations 안에 있는 province와 city를 검색하세요
for loc in locations:
    prov = re.findall(r'<province>(.+)</province>', loc)
    city = re.findall(r'<city>(.+)</city>', loc)
    # print(prov[0], city[0])

    # 퀴즈
    # data를 찾아보세요
    data = re.findall(r'<data>(.+?)</data>', loc, re.DOTALL)
    # print(len(data))
    # print(data[0])

    # 퀴즈
    # mode, tmEf, wf, tmn, tmx, rnSt를 검색하세요
    for datum in data:
        mode = re.findall(r'<mode>(.+)</mode>', datum)
        tmEf = re.findall(r'<tmEf>(.+)</tmEf>', datum)
        wf = re.findall(r'<wf>(.+)</wf>', datum)
        tmn = re.findall(r'<tmn>(.+)</tmn>', datum)
        tmx = re.findall(r'<tmx>(.+)</tmx>', datum)
        rnSt = re.findall(r'<rnSt>(.+)</rnSt>', datum)
        # print(prov[0], city[0], mode[0], tmEf[0], wf[0], tmn[0], tmx[0], rnSt[0],
        #       file=f, sep=',')

        row = '{},{},{},{},{},{},{},{}\n'.format(prov[0], city[0], mode[0], tmEf[0], wf[0], tmn[0], tmx[0], rnSt[0])
        f.write(row)

f.close()

# 퀴즈
# 파싱한 내용을 weather.csv 파일로 저장하세요

# 서울ㆍ인천ㆍ경기도 서울
# A02 2024-10-31 00:00 맑음 11 22 10
# A02 2024-10-31 12:00 맑음 11 22 10
# ->
# 서울ㆍ인천ㆍ경기도 서울 A02 2024-10-31 00:00 맑음 11 22 10
# 서울ㆍ인천ㆍ경기도 서울 A02 2024-10-31 12:00 맑음 11 22 10
