#ifndef org_apache_lucene_queryparser_flexible_core_nodes_PathQueryNode$QueryText_H
#define org_apache_lucene_queryparser_flexible_core_nodes_PathQueryNode$QueryText_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class CloneNotSupportedException;
    class CharSequence;
    class String;
    class Cloneable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace nodes {

              class PathQueryNode$QueryText : public ::java::lang::Object {
              public:
                enum {
                  mid_init$_6cc8d7e2,
                  mid_clone_ec4055b6,
                  mid_getBegin_54c6a179,
                  mid_getEnd_54c6a179,
                  mid_getValue_e0adba2f,
                  mid_toString_14c7b5c5,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit PathQueryNode$QueryText(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL)
                    env->getClass(initializeClass);
                }
                PathQueryNode$QueryText(const PathQueryNode$QueryText& obj) : ::java::lang::Object(obj) {}

                PathQueryNode$QueryText(const ::java::lang::CharSequence &, jint, jint);

                PathQueryNode$QueryText clone() const;
                jint getBegin() const;
                jint getEnd() const;
                ::java::lang::CharSequence getValue() const;
                ::java::lang::String toString() const;
              };
            }
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace nodes {
              extern PyTypeObject PY_TYPE(PathQueryNode$QueryText);

              class t_PathQueryNode$QueryText {
              public:
                PyObject_HEAD
                PathQueryNode$QueryText object;
                static PyObject *wrap_Object(const PathQueryNode$QueryText&);
                static PyObject *wrap_jobject(const jobject&);
                static void install(PyObject *module);
                static void initialize(PyObject *module);
              };
            }
          }
        }
      }
    }
  }
}

#endif
