def personal_data(birth_year, name, origin):
    current_year = 2020
    age = current_year - birth_year

    print(f"Perkenalkan Nama Saya : {name}")
    print(f"Umur Saya : {age}")
    print(f"Saya Adalah Angkatan : {current_year}")
    print(f"Asal Saya dari : {origin}")


birth_year = int(input())
name = input()
origin = input()

personal_data(birth_year, name, origin)