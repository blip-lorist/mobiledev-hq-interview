require "./sudoku_board.rb"

describe "sudoku board object" do 
    context "fresh, new board" do 
        fixture = SudokuBoard.new()

        it "instantiates a new board" do 
            expect(fixture).to be_a_kind_of(SudokuBoard) 
        end

        it "has the right attributes" do 
            expect(fixture.grid_lookup).to be_a_kind_of(Hash)
            expect(fixture.board).to be_a_kind_of(Hash)
        end

        it "has nine rows" do 
            expect(fixture.board.keys.count).to eq(9)
        end
    
        it "has nine spaces per row" do
            fixture.board.each do |k, v|
                expect(v.count).to eq(9) 
            end
        end
    end

    context "with seed data" do 
        fixture = SudokuBoard.new()
        
        #it "loads each row" do 
        #    row = Array(1..9)
        #    fixture.load_row(row, "a")    
        #    expect(fixture.board["a"].values).to eq(["1", "2", "3", "4", "5", "6", "7", "8", "9"])
        #end
    end
end

