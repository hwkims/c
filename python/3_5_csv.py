# 3_5_csv.py
import csv          # comma separated values


def read_csv():
    f = open('data/us-500.csv', 'r', encoding='utf-8')

    for row in csv.reader(f):
        print(row)

    f.close()


def write_csv():
    f = open('data/sample.csv', 'w', encoding='utf-8', newline='')

    # writer = csv.writer(f)
    writer = csv.writer(f, delimiter=',', quoting=csv.QUOTE_ALL)
    writer.writerow([12, 3.45, 'abc'])
    writer.writerow([67, 8.90, 'bed'])

    f.close()


# read_csv()
write_csv()
