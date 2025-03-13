# 4_5_class.py


class Info:
    first_name = 'kim'

    def __init__(self, alias):
        print("생성자")
        self.name = alias               # 멤버 변수

    def show(self):                     # 멤버 함수
        print("show 호출", self.name)


info = Info('han')
# info.age = 30
print(info.name)

info2 = Info('nam')
print(info2.name)

print(Info.first_name)
print(info.first_name)
print(info2.first_name)

# 퀴즈
# show 함수를 호출하세요 (2가지)
info.show()
Info.show(info)
# Info.show('hello')    # error

