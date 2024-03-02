#include <Python.h>

typedef struct TSLanguage TSLanguage;

TSLanguage *tree_sitter_xml(void);
TSLanguage *tree_sitter_dtd(void);

static PyObject* _binding_language_xml(PyObject *self, PyObject *args) {
    return PyLong_FromVoidPtr(tree_sitter_xml());
}

static PyObject* _binding_language_dtd(PyObject *self, PyObject *args) {
    return PyLong_FromVoidPtr(tree_sitter_dtd());
}

static PyMethodDef methods[] = {
    {"language_xml", _binding_language_xml, METH_NOARGS,
     "Get the tree-sitter language for XML."},
    {"language_dtd", _binding_language_dtd, METH_NOARGS,
     "Get the tree-sitter language for DTD."},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef module = {
    .m_base = PyModuleDef_HEAD_INIT,
    .m_name = "_binding",
    .m_doc = NULL,
    .m_size = -1,
    .m_methods = methods
};

PyMODINIT_FUNC PyInit__binding(void) {
    return PyModule_Create(&module);
}
