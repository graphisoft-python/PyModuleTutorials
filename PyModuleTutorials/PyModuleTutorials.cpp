// PyModuleTutorials.cpp : 定义 DLL 应用程序的导出函数。
//

#include "stdafx.h"


#include<pybind11/pybind11.h>

namespace py = pybind11;

PYBIND11_MODULE(PyModuleTutorials, m) {

	m.doc() = "pybind11 example module";

	// Add bindings here
	m.def("foo", []() {
		return "Hello, World! PyModuleTutorials";
	});

}
