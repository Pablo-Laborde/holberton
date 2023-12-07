#!/usr/bin/env python3
"""ex hol"""
import asyncio
from typing import List
wait_random = __import__('0-basic_async_syntax').wait_random


async def wait_n(n: int, max_delay: int) -> List[float]:
    """wait func"""
    ls: List[float] = []
    for i in range(n):
        f = await wait_random(max_delay)
        ls.append(f)
    return sorted(ls)
