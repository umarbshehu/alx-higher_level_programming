#!/usr/bin/python3

""" add_integer
Adds two integers (x, y) and returns integer sum
Floats get converted to integers, all others raise TypeError
"""


def add_integer(x, y=98):
    """ add_integer - adds two integers (x, y)
    Returns: integer sum
    """
    if not isinstance(x, int) and not isinstance(x, float):
        raise TypeError("x must be an integer")
    if not isinstance(y, int) and not isinstance(y, float):
        raise TypeError("y must be an integer")

    if isinstance(x, float):
        a = int(x)
    if isinstance(y, float):
        b = int(y)

    return x + y


if __name__ == '__main__':
    print(add_integer(1, 2))
    print(add_integer(100, -2))
    print(add_integer(2))
    print(add_integer(100.3, -2))
    try:
        print(add_integer(4, "School"))
    except Exception as e:
        print(e)
    try:
        print(add_integer(None))
    except Exception as e:
        print(e)

    try:
        print(add_integer(1.99, 3.5))
    except Exception as e:
        print(e)

    try:
        print(add_integer(None))
    except Exception as e:
        print(e)
