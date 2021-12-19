# https://www.codewars.com/kata/5772da22b89313a4d50012f7/train/ruby


def greet(name, owner)
    return (name == owner) ? "Hello boss" : "Hello guest"
end

name = gets
owner = gets
puts(greet(name, owner))