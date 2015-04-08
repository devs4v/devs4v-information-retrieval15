#ifndef org_apache_lucene_analysis_util_CharacterUtils_H
#define org_apache_lucene_analysis_util_CharacterUtils_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Version;
      }
      namespace analysis {
        namespace util {
          class CharacterUtils$CharacterBuffer;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class CharSequence;
  }
  namespace io {
    class IOException;
    class Reader;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace util {

          class CharacterUtils : public ::java::lang::Object {
          public:
            enum {
              mid_init$_54c6a166,
              mid_codePointAt_2fbf15bf,
              mid_codePointAt_6f0bb349,
              mid_codePointCount_a8afc655,
              mid_fill_4a603207,
              mid_fill_907fec5b,
              mid_getInstance_c0e3b02e,
              mid_getJava4Instance_2fcca481,
              mid_newCharacterBuffer_531f8606,
              mid_offsetByCodePoints_f453ace9,
              mid_toChars_4c08f211,
              mid_toCodePoints_625a1e21,
              mid_toLowerCase_6f0bb356,
              mid_toUpperCase_6f0bb356,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CharacterUtils(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            CharacterUtils(const CharacterUtils& obj) : ::java::lang::Object(obj) {}

            CharacterUtils();

            jint codePointAt(const ::java::lang::CharSequence &, jint) const;
            jint codePointAt(const JArray< jchar > &, jint, jint) const;
            jint codePointCount(const ::java::lang::CharSequence &) const;
            jboolean fill(const ::org::apache::lucene::analysis::util::CharacterUtils$CharacterBuffer &, const ::java::io::Reader &) const;
            jboolean fill(const ::org::apache::lucene::analysis::util::CharacterUtils$CharacterBuffer &, const ::java::io::Reader &, jint) const;
            static CharacterUtils getInstance(const ::org::apache::lucene::util::Version &);
            static CharacterUtils getJava4Instance();
            static ::org::apache::lucene::analysis::util::CharacterUtils$CharacterBuffer newCharacterBuffer(jint);
            jint offsetByCodePoints(const JArray< jchar > &, jint, jint, jint, jint) const;
            jint toChars(const JArray< jint > &, jint, jint, const JArray< jchar > &, jint) const;
            jint toCodePoints(const JArray< jchar > &, jint, jint, const JArray< jint > &, jint) const;
            void toLowerCase(const JArray< jchar > &, jint, jint) const;
            void toUpperCase(const JArray< jchar > &, jint, jint) const;
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
          extern PyTypeObject PY_TYPE(CharacterUtils);

          class t_CharacterUtils {
          public:
            PyObject_HEAD
            CharacterUtils object;
            static PyObject *wrap_Object(const CharacterUtils&);
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
