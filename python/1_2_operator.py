# 1_2_operator.py

# 연산 : 산술, 관계, 논리, 비트
# 산술 : +  -  *  /  **  //  %
print(7 + 3)
print(7 - 3)
print(7 * 3)
print(7 / 3)        # 나눗셈(실수)
print(7 ** 3)       # 지수
print(7 // 3)       # 나눗셈(정수, 몫)
print(7 % 3)        # 나머지

# 퀴즈
# 3자리 정수의 자릿수 합계를 구하세요
# 135 -> 9
a = 135
print(a//100, a%100//10, a%10)
print(a//100 + a%100//10 + a%10)

print('ace' + 'club')
# print('ace' - 'club')     # error

print('-' * 30)

# 관계 : >  >=  <  <=  ==  !=
print(7 > 3)
print(7 >= 3)
print(7 < 3)
print(7 <= 3)
print(7 == 3)
print(7 != 3)

# 퀴즈
# age가 10대라면 True, 아니라면 False를 출력하세요
age = 15
print((age >= 10) * (age <= 19))
print(10 <= age <= 19)

print('ace' < 'club')
print('-' * 30)

# 논리 : and  or  not
print(True and True)
print(True and False)
print(False and True)
print(False and False)

# 퀴즈
# age가 10대라면 True, 아니라면 False를 출력하세요
print(age >= 10 and age <= 19)
