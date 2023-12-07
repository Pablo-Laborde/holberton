export default function createReportObject(employeesList) {
  const newObj = {
    allEmployees: employeesList,
    getNumberOfDepartments(employeesList) {
      /*eslint-disable*/
      let count = 0;
      for (const i in employeesList) {
          count += 1;
      }
      return count;
    },
  }
  return newObj;
}
