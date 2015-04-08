#ifndef org_apache_lucene_codecs_lucene40_Lucene40SkipListReader_H
#define org_apache_lucene_codecs_lucene40_Lucene40SkipListReader_H

#include "org/apache/lucene/codecs/MultiLevelSkipListReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class IndexInput;
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
      namespace codecs {
        namespace lucene40 {

          class Lucene40SkipListReader : public ::org::apache::lucene::codecs::MultiLevelSkipListReader {
          public:
            enum {
              mid_init$_949015ba,
              mid_getFreqPointer_54c6a17a,
              mid_getOffsetLength_54c6a179,
              mid_getPayloadLength_54c6a179,
              mid_getProxPointer_54c6a17a,
              mid_init_05c5678f,
              mid_seekChild_39c7bd3c,
              mid_setLastSkipData_39c7bd3c,
              mid_readSkipData_5203bb2b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene40SkipListReader(jobject obj) : ::org::apache::lucene::codecs::MultiLevelSkipListReader(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            Lucene40SkipListReader(const Lucene40SkipListReader& obj) : ::org::apache::lucene::codecs::MultiLevelSkipListReader(obj) {}

            Lucene40SkipListReader(const ::org::apache::lucene::store::IndexInput &, jint, jint);

            jlong getFreqPointer() const;
            jint getOffsetLength() const;
            jint getPayloadLength() const;
            jlong getProxPointer() const;
            void init(jlong, jlong, jlong, jint, jboolean, jboolean) const;
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
      namespace codecs {
        namespace lucene40 {
          extern PyTypeObject PY_TYPE(Lucene40SkipListReader);

          class t_Lucene40SkipListReader {
          public:
            PyObject_HEAD
            Lucene40SkipListReader object;
            static PyObject *wrap_Object(const Lucene40SkipListReader&);
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
