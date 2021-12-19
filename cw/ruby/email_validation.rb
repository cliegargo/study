# https://www.codewars.com/kata/52711e5cc961c233d0000048/train/ruby


def validate(email)
    valid = /([a-zA-Z0-9._-]+@[a-z-]+\.[a-z]+)/
    
    if valid.match?(email)
        return true
    else
        return false
    end
end


email = gets
puts(validate(email))