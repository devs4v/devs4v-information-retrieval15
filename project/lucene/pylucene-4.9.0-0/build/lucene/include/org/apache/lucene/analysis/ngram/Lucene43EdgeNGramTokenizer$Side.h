#ifndef org_apache_lucene_analysis_ngram_Lucene43EdgeNGramTokenizer$Side_H
#define org_apache_lucene_analysis_ngram_Lucene43EdgeNGramTokenizer$Side_H

#include "java/lang/Enum.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ngram {

          class Lucene43EdgeNGramTokenizer$Side : public ::java::lang::Enum {
          public:
            enum {
              mid_getLabel_14c7b5c5,
              mid_getSide_2ac44635,
              mid_valueOf_2ac44635,
              mid_values_0033eb83,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene43EdgeNGramTokenizer$Side(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            Lucene43EdgeNGramTokenizer$Side(const Lucene43EdgeNGramTokenizer$Side& obj) : ::java::lang::Enum(obj) {}

            static Lucene43EdgeNGramTokenizer$Side *BACK;
            static Lucene43EdgeNGramTokenizer$Side *FRONT;

            ::java::lang::String getLabel() const;
            static Lucene43EdgeNGramTokenizer$Side getSide(const ::java::lang::String &);
            static Lucene43EdgeNGramTokenizer$Side valueOf(const ::java::lang::String &);
            static JArray< Lucene43EdgeNGramTokenizer$Side > values();
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
      namespace analysis {
        namespace ngram {
          extern PyTypeObject PY_TYPE(Lucene43EdgeNGramTokenizer$Side);

          class t_Lucene43EdgeNGramTokenizer$Side {
          public:
            PyObject_HEAD
            Lucene43EdgeNGramTokenizer$Side object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_Lucene43EdgeNGramTokenizer$Side *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const Lucene43EdgeNGramTokenizer$Side&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const Lucene43EdgeNGramTokenizer$Side&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
