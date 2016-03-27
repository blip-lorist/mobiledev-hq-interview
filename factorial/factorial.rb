def factorial(x)

    error_string = "Please input a positive integer." 
   
    if x <= 0
        return error_string 
    elsif x.class == Bignum
        return "Let's try a smaller number!"
    elsif x.class != Fixnum
        return error_string    
    elsif x == 1
        product = 1
    else
        product = x 

        while x > 1
            x -= 1
            product *= x 
        end 
    end            
    
    return product 
end
