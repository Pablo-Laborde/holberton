#!/usr/bin/env python3
"""ex hol"""
from asyncio import run
from random import choices
from typing import List
async_generator = __import__('0-async_generator').async_generator


async def async_comprehension() -> List[float]:
    """ac func"""
    result = [i async for i in async_generator()]
    return result

if __name__ == "__main__":
    async def main():
        print(await async_comprehension())

    run(main())
