require "./factorial"

describe "factorial method" do
    context "with valid input" do 
        it "returns 1 with an input of 1" do 
            expect(factorial(1)).to eq(1)
        end

        it "returns 720 with an input of 6" do 
            expect(factorial(6)).to eq(720)
        end

        it "returns 87178291200 with an input of 14 because of Bignum output" do 
            expect(factorial(14)).to eq(87178291200)
        end
    end

    context "error handling with invalid input" do 
        it "doesn't allow a negative integer input" do 
            expect(factorial(-5)).to eq("Please input a positive integer.")
        end

        it "doesn't allow an input of 0" do 
            expect(factorial(0)).to eq("Please input a positive integer.")
        end
        
        it "doesn't allow Bignum input" do
            expect(factorial(4611686018427387904)).to eq("Let's try a smaller number!")
        end
    end
end

