import os
import random
import shutil
import chgname

def copy_random_images(source_folder, destination_folder, num_images):
    # Get a list of all image files in the source folder
    image_files = [file for file in os.listdir(source_folder) if file.endswith(('.jpg', '.jpeg', '.png', '.gif'))]

    # Select random images from the list
    random_images = random.sample(image_files, num_images)

    # Copy the selected images to the destination folder and change the file name
    for i, image in enumerate(random_images):
        source_path = os.path.join(source_folder, image)
        destination_path = os.path.join(destination_folder, image)
        shutil.copy2(source_path, destination_path)

# Specify the source folder, destination folder, and number of images to copy
source_folder = 'C:\\Users\\gmtfarcb\\Desktop\\a'
destination_folder = 'C:\\Users\\gmtfarcb\\Desktop\\a\\b'
num_images = 30

# Call the function to copy the random images
copy_random_images(source_folder, destination_folder, num_images)
