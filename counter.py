filename = "board.cpp"

with open(filename, "r", encoding="utf-8") as file:
    non_empty_lines = [line for line in file if line.strip()] 

print(f"Non-empty lines: {len(non_empty_lines)}")