#!/usr/bin/env python3
"""ex hol"""
import asyncio
import random


async def wait_random(max_delay: int = 10) -> float:
    """asco func"""
    rnd = random.random()
    ttw = max_delay * rnd
    await asyncio.sleep(ttw)
    return ttw
