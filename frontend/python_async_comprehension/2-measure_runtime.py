#!/usr/bin/env python3
"""ex hol"""
from asyncio import run, gather
from time import time
async_comprehension = __import__('1-async_comprehension').async_comprehension


async def measure_runtime() -> float:
    """mr func"""
    start = time()
    await gather(async_comprehension())
    end = time()
    tt = end - start
    return tt


if __name__ == "__main__":
    async def main():
        return await(measure_runtime())

    print(run(main()))
