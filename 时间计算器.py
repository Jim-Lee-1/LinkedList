# 主函数
def add_time(start, duration, date=None):

    # 以下注释以参数("11:43 PM", "24:20", "tueSday")为例
    # 函数应该返回: 2:02 PM, Monday

    # flag存'PM'
    flag = start.split(' ')[1]
    # 起始时间time1存'11:43'
    time1 = start.split(' ')[0]
    # 中间时间time2存'24:20'
    time2 = duration

    # hour1存11，minute1存43
    hour1 = int(time1.split(':')[0])
    # 转换成24小时制
    if (hour1 == 12) & (flag == 'AM'):
        hour1 -= 12
    elif (flag == 'PM') & (hour1 < 12):
        hour1 += 12
    minute1 = int(time1.split(':')[1])

    # hour2存24，minute1存20
    hour2 = int(time2.split(':')[0])
    minute2 = int(time2.split(':')[1])

    # hour3 = 11 + 24, minute3 = 43 + 20
    hour3 = hour1 + hour2
    minute3 = minute1 + minute2

    # 控制minute3的范围在[0,60)
    hour3 += int(minute3 / 60)
    minute3 = minute3 % 60

    # 控制hour3的范围在[0,24)
    days = int(hour3 / 24)
    hour3 = hour3 % 24

    # 转换成12小时制
    if hour3 >= 12:
        flag = 'PM'
        if hour3 > 12:
            hour3 -= 12
    else:
        flag = 'AM'
        if hour3 == 0:
            hour3 += 12

    # 终点时间time3存'2:02'
    if minute3 >= 10:
        time3 = str(hour3) + ':' + str(minute3)
    else:
        time3 = str(hour3) + ':0' + str(minute3)

    # new_time用于函数最终返回
    # 把 '2:02 PM' 加到new_time
    new_time = time3 + ' ' + flag

    # date存Monday
    if date is not None:
        # 转小写
        date = date.lower()
        # 给七种星期编码
        match date:
            case 'sunday':
                date = 0
            case 'monday':
                date = 1
            case 'tuesday':
                date = 2
            case 'wednesday':
                date = 3
            case 'thursday':
                date = 4
            case 'friday':
                date = 5
            case 'saturday':
                date = 6
        # 更新date
        date += days
        date %= 7
        # 给date译码
        match date:
            case 0:
                date = 'Sunday'
            case 1:
                date = 'Monday'
            case 2:
                date = 'Tuesday'
            case 3:
                date = 'Wednesday'
            case 4:
                date = 'Thursday'
            case 5:
                date = 'Friday'
            case 6:
                date = 'Saturday'
        # 把 ', Monday' 加到new_time
        new_time = new_time + ', ' + date

    match days:
        case 0:
            return new_time
        case 1:
            return new_time + ' (next day)'
        case _:
            return new_time + ' (%d days later)' % days


a = add_time("11:43 PM", "24:20", "tueSday")
print(a)
