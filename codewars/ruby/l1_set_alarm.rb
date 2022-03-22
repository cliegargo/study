# https://www.codewars.com/kata/568dcc3c7f12767a62000038/train/ruby


def set_alarm(employed, vacation)
    return (employed == true && vacation == false) ? true : false
end

employed = gets
vacation = gets
print(set_alarm(employed, vacation))