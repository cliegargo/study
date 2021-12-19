# https://www.codewars.com/kata/59fca81a5712f9fa4700159a/train/ruby


def to_binary(n)
    bin = n.to_s(2)

    return bin.to_i
end


n = gets.to_i
print(to_binary(n))
