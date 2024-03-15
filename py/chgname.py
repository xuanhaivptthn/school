import os

folder_path = 'C:\\Users\\gmtfarcb\\Desktop\\a\\b'  # Replace with the actual folder path

# Get a list of all files in the folder
files = os.listdir(folder_path)

# Sort the files alphabetically
files.sort()

# Rename each file with a numbered name
for i, file_name in enumerate(files, start=1):
    # Get the file extension
    file_extension = os.path.splitext(file_name)[1]
    
    # Generate the new file name
    new_file_name = f'{i}{file_extension}'
    
    # Construct the full paths for the old and new file names
    old_file_path = os.path.join(folder_path, file_name)
    new_file_path = os.path.join(folder_path, new_file_name)
    
    # Rename the file
    os.rename(old_file_path, new_file_path)