#ifndef org_apache_lucene_facet_taxonomy_PrintTaxonomyStats_H
#define org_apache_lucene_facet_taxonomy_PrintTaxonomyStats_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace taxonomy {
          class TaxonomyReader;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace io {
    class IOException;
    class PrintStream;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace taxonomy {

          class PrintTaxonomyStats : public ::java::lang::Object {
          public:
            enum {
              mid_init$_54c6a166,
              mid_main_4dd4540c,
              mid_printStats_aafb31cf,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PrintTaxonomyStats(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            PrintTaxonomyStats(const PrintTaxonomyStats& obj) : ::java::lang::Object(obj) {}

            PrintTaxonomyStats();

            static void main(const JArray< ::java::lang::String > &);
            static void printStats(const ::org::apache::lucene::facet::taxonomy::TaxonomyReader &, const ::java::io::PrintStream &, jboolean);
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace taxonomy {
          extern PyTypeObject PY_TYPE(PrintTaxonomyStats);

          class t_PrintTaxonomyStats {
          public:
            PyObject_HEAD
            PrintTaxonomyStats object;
            static PyObject *wrap_Object(const PrintTaxonomyStats&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
