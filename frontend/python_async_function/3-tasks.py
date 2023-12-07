#!/usr/bin/env python3
"""ex hol"""
import asyncio
wait_random = __import__('0-basic_async_syntax').wait_random


def task_wait_random(max_delay: int) -> asyncio.Task:
    """task func"""
    task = asyncio.create_task(wait_random(max_delay))
    return task
