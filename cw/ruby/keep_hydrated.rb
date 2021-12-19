# https://www.codewars.com/kata/582cb0224e56e068d800003c/train/ruby


def litres(time)
    return (time * 0.5).to_i
end

time = gets.to_f
print(litres(time))
