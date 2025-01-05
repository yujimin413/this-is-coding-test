data = input() # 문자열 입력 받기

result = int(data[0]) # 첫 번째 문자를 숫자로 변경

for i in range(1, len(data)):
    num = int(data[i])
    # 두 수 중 하나라도 0 or 1인 경우 더하기 수행
    if num <= 1 or result <= 1:
        result += num
    # 두 수 모두 2 이상인 경우 곱하기 수행
    else:
        result *= num

print(result)