# 5_1_string.py
import string
import csv

def read_csv():
    f = open('data/weather.csv', 'r', encoding='utf-8')

    rows = []
    for line in f:
        # print(line.strip())
        rows.append(line.strip().split(','))
        # rows[-1].append(123)      # 정수가 들어가면 join 함수에서 에러
        # rows[-1].append('123')
        print(rows[-1])

        # row = line.strip().split(',')
        # row.append(123)
        # rows.append(row)

    # format, split, join, strip
    for row in rows:
        print(','.join(row))
        # print('{},{}'.format(row[0], row[1]))

    # for row in csv.reader(f):
    #     print(row)

    f.close()


print(string.digits)
print(string.ascii_lowercase)

read_csv()
