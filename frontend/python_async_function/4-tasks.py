#!/usr/bin/env python3
"""ex hol"""
import asyncio
from typing import List
wait_random = __import__('0-basic_async_syntax').wait_random


def task_wait_random(max_delay: int) -> asyncio.Task:
    """task func"""
    task = asyncio.create_task(wait_random(max_delay))
    return task


async def task_wait_n(n: int, max_delay: int) -> List[float]:
    """wait func"""
    ls: List[float] = []
    for i in range(n):
        f = await task_wait_random(max_delay)
        ls.append(f)
    return sorted(ls)
