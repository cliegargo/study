# https://www.codewars.com/kata/57089707fe2d01529f00024a/train/ruby


def check_alive(health)
    return (health > 0) ? true : false
end


health = gets.to_i
puts(check_alive(health))