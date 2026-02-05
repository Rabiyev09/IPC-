import random
import string
total = string.ascii_letters + string.digits + string.punctuation

password = "".join(random.sample(total, 8))
print(password)


