#!/usr/bin/python3
""" comment """

from sys import argv
from model_state import Base, State
from model_city import Base, City

from sqlalchemy import create_engine
from sqlalchemy.orm import Session
from sqlalchemy import select, delete


if __name__ == "__main__":
    su = f"mysql+mysqldb://{argv[1]}:{argv[2]}@localhost:3306/{argv[3]}"
    engine = create_engine(su, pool_pre_ping=True)
    Base.metadata.create_all(engine)
    with Session(engine) as encon:
        query = select(City, State).join(State, State.id
                                         == City.state_id).order_by(City.id)
        result = encon.execute(query).all()
    for each in result:
        print(f"{each[1].name}: ({each[0].id}) {each[0].name}")
