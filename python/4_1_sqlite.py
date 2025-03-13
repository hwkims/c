# 4_1_sqlite.py
import csv          # comma separated values
import sqlite3


# 퀴즈
# weather.csv 파일을 반환하는 함수를 만드세요
def read_csv():
    f = open('data/weather.csv', 'r', encoding='utf-8')

    rows = []
    for row in csv.reader(f):
        rows.append(row)

    f.close()
    return rows


def create_db():
    conn = sqlite3.connect('data/weather.sqlite3')
    cur = conn.cursor()

    query = 'CREATE TABLE weather (prov TEXT, city TEXT, mode TEXT, tmEf TEXT, wf TEXT, tmn TEXT, tmx TEXT, rnSt TEXT)'
    cur.execute(query)

    conn.commit()
    conn.close()


def insert_row(row):
    conn = sqlite3.connect('data/weather.sqlite3')
    cur = conn.cursor()

    base = 'INSERT INTO weather VALUES("{}", "{}", "{}", "{}", "{}", "{}", "{}", "{}")'
    query = base.format(row[0], row[1], row[2], row[3], row[4], row[5], row[6], row[7])
    cur.execute(query)

    conn.commit()
    conn.close()


def insert_all(rows):
    conn = sqlite3.connect('data/weather.sqlite3')
    cur = conn.cursor()

    base = 'INSERT INTO weather VALUES("{}", "{}", "{}", "{}", "{}", "{}", "{}", "{}")'

    for row in rows:
        # query = base.format(row[0], row[1], row[2], row[3], row[4], row[5], row[6], row[7])
        query = base.format(*row)
        cur.execute(query)

    conn.commit()
    conn.close()


def fetch_all():
    conn = sqlite3.connect('data/weather.sqlite3')
    cur = conn.cursor()

    # query = 'SELECT * FROM weather'
    # for row in cur.execute(query):
    #     print(row)

    rows = list(cur.execute('SELECT * FROM weather'))
    print(*rows, sep='\n')

    # conn.commit()
    conn.close()


def search_all(city):
    conn = sqlite3.connect('data/weather.sqlite3')
    cur = conn.cursor()

    query = 'SELECT * FROM weather WHERE city="{}"'.format(city)
    result = list(cur.execute(query))
    for row in result:
        print(row)

    print('-' * 30)
    for row in result:
        print(row)

    conn.commit()
    conn.close()


rows = read_csv()
# print(*rows, sep='\n')

# create_db()

# for row in rows:
#     insert_row(row)

# insert_all(rows)
# fetch_all()

# 퀴즈
# city 필드가 부산인 데이터만 반환하는 함수를 만드세요
search_all(city='부산')





