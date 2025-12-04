import os 
root = os.getcwd()

last_n = max([int(file.replace("task", "").replace(".c", ""))\
                   for file in os.listdir(os.path.join(root, 'stepik'))])
n = last_n + 1


print(last_n, n, root)

read_path = os.path.join(root, f"stepik/task{last_n}.c")
with open(read_path, 'r') as f:
    data = f.read()

write_path = os.path.join(root, f"stepik/task{n}.c")
with open(write_path, 'w') as f:
    f.write(data)

print("Operation complete!\nRun command below to satart code\n")
print(f"gcc stepik/task{n}.c -o task; ./task.exe")

warning_message = (
"-"*100 + 
f"""
    - MAKE SURE TO SWITCH FILES!!!

    - MAKE SURE TO USE {n} in your command!!!
""" + 
"-"*100
)

print(warning_message)