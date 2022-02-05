// ABC University is a large institution with several campuses. Each campus has a different name, address, and distance to
// the city center.
// The University consists of a number of faculties, such as the Art Faculty, the Science Faculty, and so on. Each faculty has a
// name, dean and building. ABC University offers different programmes and each programme has a code (valid format: P-nnn,
// where n can be any digit), title, level and duration (1, 2 or 3). Each programme comprises several courses, different programmes
// have different courses. Each course has a code (valid format C-nnn, where n can be any digit) and course title.
// Each of the students is enrolled in a single programme of study which involves a fixed set of core courses specific to that
// programme as well as a number of electives taken from other programmes. Students work on courses and are awarded a grade
// in any course if he/she passes the course. Otherwise the student has to re-take the failed course. The system needs to record
// the year and term in which the course was taken and the grade awarded to the student. Every student has a unique ID. The
// system also keeps the student name, birthday and the year he/she enrolled in the course.

// a. Identify all the classes and objects that will be needed.
// 1. Campus
// 2. Faculty
// 3. Programme
// 4. Course
// 5. Student
// 6. Result

// b. Identify the key attributes and functionalities of each class.
// 1. Campus
//     Attributes: name, address, distance
//     Functionalities:

// 2. Faculty
//     Attributes: name, dean, building
//     Functionalities:

// 3. Programme
//     Attriburtes: code, title, level, duration
//     Functionalities: validateCode(string)

// 4. Course
//     Attributes: code, title
//     Functionalities: validateCode(string)

// 5. Student
//     Attributes: id, name, birthday, enrollmentYear
//     Functionalities:

// 6. Result
//     Attributes: year, term, grade
//     Functionalities:

