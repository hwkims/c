# 4_4_exception.py

try:
    a = 0
    b = 7 // a
    print(b)
except ZeroDivisionError:
    print('ZeroDivisionError')
except:
    print('알 수 없는 예외')

try:
    b = [1, 3, 5]
    b[len(b)] = 99
except IndexError as e:
    print(e)
    print(len(b))


