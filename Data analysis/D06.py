'''
standardPrice = {'쌀':9900, '상추':1900, '고추':2900,'마늘':8900,'통닭':5600,'햄':6900,'치즈':3900}

def getDiscountPrice(rate):
    dcPrice={}
    for goods in standardPrice.keys():
        disPric = int(standardPrice[goods] * (1-(rate/100)))
        dcPrice[goods] = disPric
    return dcPrice

def printPrice(priceList):
    for goods in priceList.keys():
        print(goods, '\t:',standardPrice[goods], '원\t', inputData, '%DC->',priceList[goods],'원')

print('-----------------------------------')
print('-- 한빛마트 오늘의 할인 가격표 출력 시스템 --')
print('-----------------------------------')

inputData = int(input('오늘의 할인율을 입력하세요.'))
getDiscountPrice = getDiscountPrice(inputData)

printPrice(getDiscountPrice)
print('-----------------------------------')'''

import calculator

calculator.addition(1,2)
calculator.substraction(1,2)
calculator.multiplication(1,2)
calculator.division(1,2)
calculator.rest(1,2)
calculator.portion(1,2)

