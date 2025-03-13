# 4_6_songs.py
from time import sleep
import requests
import re


# 퀴즈
# 한국음악저작권협회에서 지드래곤의 노래 데이터를 가져오세요
# (제목, 가수, 작사, 작곡, 편곡)
def get_songs(code, page):
    payload = {
        'S_PAGENUMBER': page,
        'S_MB_CD': code,        # 'W0726200'
        # 'S_HNAB_GBN': 'I',
        # 'hanmb_nm': '권지용',
        # 'sort_field': 'SORT_PBCTN_DAY',
    }

    url = 'https://www.komca.or.kr/srch2/srch_01_popup_mem_right.jsp'
    response = requests.post(url, data=payload)
    # print(response)
    # print(response.text)

    tbodies = re.findall(r'<tbody>(.+?)</tbody>', response.text, re.DOTALL)
    # print(tbodies)
    # print(tbodies[1])

    table_rows = re.findall(r'<tr>(.+?)</tr>', tbodies[1], re.DOTALL)
    # print(len(table_rows))

    for tr in table_rows:
        tr = tr.replace('<br/>', ',')
        # tr = tr.replace('<img src="/images/common/control.gif"  alt="" />', '')
        # tr = tr.replace('<img src="/images/common/control.gif" alt="" />', '')
        # tr = tr.replace('<img src="/images/common/NO_control.gif" alt="" />', '')
        tr = re.sub(r' <img .+? />', '', tr)

        table_data = re.findall(r'<td>(.+?)</td>', tr)
        table_data[0] = table_data[0].strip()
        print(table_data)

    return len(table_rows) > 0


# 퀴즈
# 지드래곤 노래 전체를 가져오세요
page = 1
while get_songs('W0726200', page):
    print('-' * 10, page)
    page += 1

    # sleep(60)


