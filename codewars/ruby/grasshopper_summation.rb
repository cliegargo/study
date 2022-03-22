# https://www.codewars.com/kata/55d24f55d7dd296eb9000030/train/ruby


def summation(num)
    sum = 0

    for i in 0..num
        sum += i
    end

    return sum
end


num = gets.to_i
puts(summation(num))