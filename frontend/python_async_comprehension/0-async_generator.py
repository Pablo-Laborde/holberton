#!/usr/bin/env python3
"""ex hol"""
from asyncio import sleep, run
from random import random
from typing import Generator


async def async_generator() -> Generator[float, None, None]:
    """ag func"""
    for i in range(10):
        await sleep(1)
        yield random() * 10

if __name__ == "__main__":
    async def print_yielded_values():
        result = []
        async for i in async_generator():
            result.append(i)
        print(result)

    run(print_yielded_values())
