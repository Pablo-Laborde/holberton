export default class HolbertonCourse {
  constructor(name, length, students) {
    this._name = name;
    this._length = length;
    this._students = students;
  }

  get name() {
    return this._name;
  }

  set name(nn) {
    if (typeof(nn) === 'number') {
      this._name = nn;
    }
    else {
        throw new Error('hola');
    }
  }

  get length() {
    return this._length;
  }

  set length(nl) {
    this._length = nl;
  }

  get students() {
    return this._students;
  }

  set students(ns) {
    this._students = ns;
  }
}
