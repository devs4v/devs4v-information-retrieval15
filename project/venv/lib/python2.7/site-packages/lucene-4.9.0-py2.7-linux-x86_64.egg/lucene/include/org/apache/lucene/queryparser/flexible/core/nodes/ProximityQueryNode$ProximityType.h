#ifndef org_apache_lucene_queryparser_flexible_core_nodes_ProximityQueryNode$ProximityType_H
#define org_apache_lucene_queryparser_flexible_core_nodes_ProximityQueryNode$ProximityType_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace nodes {
              class ProximityQueryNode$Type;
            }
          }
        }
      }
    }
  }
}
namespace java {
  namespace lang {
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

              class ProximityQueryNode$ProximityType : public ::java::lang::Object {
              public:
                enum {
                  mid_init$_f6618874,
                  mid_init$_4097b5f6,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit ProximityQueryNode$ProximityType(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL)
                    env->getClass(initializeClass);
                }
                ProximityQueryNode$ProximityType(const ProximityQueryNode$ProximityType& obj) : ::java::lang::Object(obj) {}

                ProximityQueryNode$ProximityType(const ::org::apache::lucene::queryparser::flexible::core::nodes::ProximityQueryNode$Type &);
                ProximityQueryNode$ProximityType(const ::org::apache::lucene::queryparser::flexible::core::nodes::ProximityQueryNode$Type &, jint);
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
              extern PyTypeObject PY_TYPE(ProximityQueryNode$ProximityType);

              class t_ProximityQueryNode$ProximityType {
              public:
                PyObject_HEAD
                ProximityQueryNode$ProximityType object;
                static PyObject *wrap_Object(const ProximityQueryNode$ProximityType&);
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
