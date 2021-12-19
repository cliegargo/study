# https://www.codewars.com/kata/574b3b1599d8f897470018f6/train/ruby


def get_real_floor(n)
    return (n > 0 && n < 13) ? n - 1 : (n >= 13) ? n - 2 : n;
end

n = gets.to_i
puts(get_real_floor(n))