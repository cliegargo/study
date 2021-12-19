def convert_to_celsius(temp)
    return (temp - 32) * (5 / 9)
end

def weather_info(temp)
    c = convert_to_celsius(temp)

    if(c > 0)
        return c.to_s + " is above freezing temperature"
    else
        return c.to_s + " is freezing temperature"
    end
end


temp = gets.to_i
print(weather_info(temp))