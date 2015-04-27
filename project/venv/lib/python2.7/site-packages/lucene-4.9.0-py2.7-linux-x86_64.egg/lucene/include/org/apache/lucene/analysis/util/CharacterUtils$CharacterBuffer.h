#ifndef org_apache_lucene_analysis_util_CharacterUtils$CharacterBuffer_H
#define org_apache_lucene_analysis_util_CharacterUtils$CharacterBuffer_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace util {

          class CharacterUtils$CharacterBuffer : public ::java::lang::Object {
          public:
            enum {
              mid_getBuffer_dab10e7f,
              mid_getLength_54c6a179,
              mid_getOffset_54c6a179,
              mid_reset_54c6a166,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CharacterUtils$CharacterBuffer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            CharacterUtils$CharacterBuffer(const CharacterUtils$CharacterBuffer& obj) : ::java::lang::Object(obj) {}

            JArray< jchar > getBuffer() const;
            jint getLength() const;
            jint getOffset() const;
            void reset() const;
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
        namespace util {
          extern PyTypeObject PY_TYPE(CharacterUtils$CharacterBuffer);

          class t_CharacterUtils$CharacterBuffer {
          public:
            PyObject_HEAD
            CharacterUtils$CharacterBuffer object;
            static PyObject *wrap_Object(const CharacterUtils$CharacterBuffer&);
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
