# 2_4_file.py


def read_1():
    f = open('data/poem.txt', 'r', encoding='utf-8')    # euc-kr

    # readline을 사용해서 파일 전체를 출력하세요
    while True:
        line = f.readline()

        # 거짓: False, 0, 0.0, None, '', "", [], {}, ()
        # if len(line) == 0:
        if not line:
            break

        # print(line, end='')
        print(line.strip())

    f.close()


def read_2():
    f = open('data/poem.txt', 'r', encoding='utf-8')    # euc-kr

    # 퀴즈
    # lines에 포함된 모든 개행문자를 제거하세요
    lines = f.readlines()

    # for line in lines:
    #     line = line.strip()

    for i in range(len(lines)):
        lines[i] = lines[i].strip()

    # print(lines)

    f.close()
    return lines


def read_3():
    # f = open('data/poem.txt', 'r', encoding='utf-8')
    #
    # for line in f:
    #     print(line.strip())
    #
    # f.close()

    with open('data/poem.txt', 'r', encoding='utf-8') as f:
        for line in f:
            print(line.strip())


def write():
    f = open('data/sample.txt', 'w', encoding='utf-8')

    f.write('sunrise\n')
    f.write('library\n')

    f.close()


# read_1()
# lines = read_2()
# print(*lines, sep='\n')
# read_3()

write()

# s = '\n\n\n\t\t\t     hello world\n\n\n\t\t\t     '
# print('[{}]'.format(s))
# print('[{}]'.format(s.strip()))





