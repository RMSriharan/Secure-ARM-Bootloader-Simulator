import hashlib

with open("kernel.img", "rb") as f:
    data = f.read()
    digest = hashlib.sha256(data).hexdigest()
    print(f"SHA-256: {digest}")
