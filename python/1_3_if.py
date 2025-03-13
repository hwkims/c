# 1_3_if.py

# 퀴즈
# 양수를 입력 받아서 홀수/짝수를 알려주세요
a = input("입력하세요 : ")
a = int(a)
print(type(a))

if a % 2:
    print('홀수')
else:
    print('짝수')

# 퀴즈
# 정수를 입력 받아서 양수/제로/음수를 알려주세요
if a < 0:
    print('음수')
else:
    if a > 0:
        print('양수')
    else:
        print('제로')

if a < 0:
    print('음수')
elif a > 0:
    print('양수')
else:
    print('제로')

